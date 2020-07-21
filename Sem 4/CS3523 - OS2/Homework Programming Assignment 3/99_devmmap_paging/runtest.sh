

# Syntax checking
#./util/memutil

# Debugging
#set -x

# --------------------------------------------------------
# Test 0 : Load the driver and find major no of driver
# --------------------------------------------------------

#dir_prefix=""
dir_prefix="/tmp"

rm -f ${dir_prefix}/mydev_*

op=`grep mykmod /proc/devices`
if [ $? -eq 0 ]
then
	echo "Unloading previously loaded module"
	rmmod mykmod
	if [ $? -ne 0 ]
	then
		echo "driver unload failed"
		exit 1
	fi
fi

# Load the module
insmod kernel/mykmod.ko

op=`grep mykmod /proc/devices`
if [ $? -ne 0 ]
then
	echo "driver is not loaded"
	exit 1
fi

majno=`echo ${op} | awk '{print $1}'`

echo "PASS - Test 0 : Module loaded with majorno: ${majno}"
dmesg -c > test0-dmesg.txt

# --------------------------------------------------------
# Test 1 : Single process reading using mapping
# --------------------------------------------------------

dev_file=`mktemp -u ${dir_prefix}/mydev_XXX`
mknod ${dev_file} c ${majno} 10

./util/memutil $dev_file --pt prefetch --op mapread
if [ $? -ne 0 ]
then
	echo "test1a mapread failed"
	exit 1
fi

rm -f ${dev_file}

dev_file=`mktemp -u ${dir_prefix}/mydev_XXX`
mknod ${dev_file} c ${majno} 11

./util/memutil $dev_file --pt demand --op mapread
if [ $? -ne 0 ]
then
	echo "test1b mapread failed"
	exit 1
fi

rm -f ${dev_file}

echo "PASS - Test 1 : Single process reading using mapping"
dmesg -c > test1-dmesg.txt

# --------------------------------------------------------
# Test 2 : Single process writing using mapping
# --------------------------------------------------------

dev_file=`mktemp -u ${dir_prefix}/mydev_XXX`
mknod ${dev_file} c ${majno} 20

./util/memutil $dev_file --pt prefetch --op mapwrite --op mapread --mes "test2"
if [ $? -ne 0 ]
then
	echo "test2a mapwrite mapread failed"
	exit 1
fi

rm -f ${dev_file}

dev_file=`mktemp -u ${dir_prefix}/mydev_XXX`
mknod ${dev_file} c ${majno} 21

./util/memutil $dev_file --pt demand --op mapwrite --op mapread --mes "test2"
if [ $? -ne 0 ]
then
	echo "test2b mapwrite mapread failed"
	exit 1
fi

rm -f ${dev_file}

echo "PASS - Test 2 : Single process writing using mapping"
dmesg -c > test2-dmesg.txt

# --------------------------------------------------------
# Test 3 : Multiple processes reading using mapping
# --------------------------------------------------------

dev_file=`mktemp -u ${dir_prefix}/mydev_XXX`
mknod ${dev_file} c ${majno} 30

./util/memutil $dev_file --pt prefetch --op mapread
if [ $? -ne 0 ]
then
	echo "test3a mapread failed"
	exit 1
fi

./util/memutil $dev_file --pt prefetch --op mapread
if [ $? -ne 0 ]
then
	echo "test3b mapread failed"
	exit 1
fi

rm -f ${dev_file}

dev_file=`mktemp -u ${dir_prefix}/mydev_XXX`
mknod ${dev_file} c ${majno} 31

./util/memutil $dev_file --pt demand --op mapread
if [ $? -ne 0 ]
then
	echo "test3c mapread failed"
	exit 1
fi

./util/memutil $dev_file --pt demand --op mapread
if [ $? -ne 0 ]
then
	echo "test3d mapread failed"
	exit 1
fi

rm -f ${dev_file}
echo "PASS - Test 3 : Multiple process reading using mapping"
dmesg -c > test3-dmesg.txt

# --------------------------------------------------------
# Test 4 : Multiple processes writing using mapping
# --------------------------------------------------------

dev_file=`mktemp -u ${dir_prefix}/mydev_XXX`
mknod ${dev_file} c ${majno} 40

./util/memutil $dev_file --pt prefetch --op mapwrite --mes "test4a" --op mapread
if [ $? -ne 0 ]
then
	echo "test4a mapwrite failed"
	exit 1
fi

./util/memutil $dev_file --pt prefetch --op mapwrite --mes "test4b" --op mapread
if [ $? -ne 0 ]
then
	echo "test4b mapwrite failed"
	exit 1
fi

rm -f ${dev_file}

dev_file=`mktemp -u ${dir_prefix}/mydev_XXX`
mknod ${dev_file} c ${majno} 41

./util/memutil $dev_file --pt demand --op mapwrite --mes "test4c" --op mapread
if [ $? -ne 0 ]
then
	echo "test4c mapwrite failed"
	exit 1
fi

./util/memutil $dev_file --pt demand --op mapwrite --mes "test4d" --op mapread
if [ $? -ne 0 ]
then
	echo "test4d mapwrite failed"
	exit 1
fi

rm -f ${dev_file}

echo "PASS - Test 4 : Multiple process writing using mapping"
dmesg -c > test4-dmesg.txt

# ----------------------------------------------------------------------------------
# Test 5 : One process writing using mapping and other process reading using mapping
# ----------------------------------------------------------------------------------

dev_file=`mktemp -u ${dir_prefix}/mydev_XXX`
mknod ${dev_file} c ${majno} 50

./util/memutil $dev_file --pt prefetch --op mapwrite --mes "test5a"
if [ $? -ne 0 ]
then
	echo "test5a mapwrite failed"
	exit 1
fi

./util/memutil $dev_file --pt prefetch --op mapread --mes "test5a"
if [ $? -ne 0 ]
then
	echo "test5a mapread failed"
	exit 1
fi

rm -f ${dev_file}

dev_file=`mktemp -u ${dir_prefix}/mydev_XXX`
mknod ${dev_file} c ${majno} 51

./util/memutil $dev_file --pt demand --op mapwrite --mes "test5b"
if [ $? -ne 0 ]
then
	echo "test5b mapwrite failed"
	exit 1
fi

./util/memutil $dev_file --pt demand --op mapread --mes "test5b"
if [ $? -ne 0 ]
then
	echo "test5b mapread failed"
	exit 1
fi

rm -f ${dev_file}

echo "PASS - Test 5 : One process writing using mapping and other process reading using mapping"
dmesg -c > test5-dmesg.txt

# ----------------------------------------------------------------------------------
# Test 6 : One process writing to one dev and other process reading from another dev.
# ----------------------------------------------------------------------------------

dev_file1=`mktemp -u ${dir_prefix}/mydev_XXX`
dev_file2=`mktemp -u ${dir_prefix}/mydev_XXX`
mknod ${dev_file1} c ${majno} 60
mknod ${dev_file2} c ${majno} 70

./util/memutil $dev_file1 --pt prefetch --op mapwrite --mes "test6a"
if [ $? -ne 0 ]
then
	echo "test6a mapwrite failed"
	exit 1
fi

./util/memutil $dev_file2 --pt prefetch --op mapread 2> /dev/null
if [ $? -ne 0 ]
then
	echo "test6a mapread failed"
	exit 1
fi

rm -f ${dev_file}

dev_file1=`mktemp -u ${dir_prefix}/mydev_XXX`
dev_file2=`mktemp -u ${dir_prefix}/mydev_XXX`
mknod ${dev_file1} c ${majno} 61
mknod ${dev_file2} c ${majno} 71

./util/memutil $dev_file1 --pt demand --op mapwrite --mes "test6b"
if [ $? -ne 0 ]
then
	echo "test6b mapwrite failed"
	exit 1
fi

./util/memutil $dev_file2 --pt demand --op mapread 2> /dev/null
if [ $? -ne 0 ]
then
	echo "test6b mapread failed"
	exit 1
fi

rm -f ${dev_file}

echo "PASS - Test 6 : One process writing to one dev and other process reading from another dev"
dmesg -c > test6-dmesg.txt

# --------------------------------------------------------
# Test n : Unload the driver and check sanity
# --------------------------------------------------------

#dir_prefix=""
dir_prefix="/tmp"

rm -f ${dir_prefix}/mydev_*
rmmod mykmod
if [ $? -ne 0 ]
then
	echo "driver unload failed"
	exit 1
fi

op=`grep mykmod /proc/devices`
if [ $? -eq 0 ]
then
	echo "driver is still loaded"
	exit 1
fi
dmesg -c > testn-dmesg.txt

# Debugging
set +x


