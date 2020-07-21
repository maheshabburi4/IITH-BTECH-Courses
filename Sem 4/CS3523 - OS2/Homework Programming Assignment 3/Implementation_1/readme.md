## Precompiling
1. Login to the VM you created in Lab Assignment 2 as root user and find IP address
```
[root@cs3523 ~]# ip r
default via 192.168.122.1 dev eth0 proto dhcp metric 100 
192.168.122.0/24 dev eth0 proto kernel scope link src 192.168.122.158 metric 100
```
2. Download the ```99_devmmap_paging.tar``` shared on https://drive.google.com/open?id=120cQoZtA7-DP58lGu01O2bV0g5h5MpaM to the home directorry and to copy the tar file to the VM, run this command in Ubuntu
```
edith@edith-G7-7588:~$ scp 99_devmmap_paging.tar root@192.168.122.158:~/
root@192.168.122.158's password: 
99_devmmap_paging.tar                         100%   30KB  27.0MB/s   00:00    
```
3.  Extract the tar file.
```
[root@cs3523 ~]# tar -xvf 99_devmmap_paging/
```
4. Download the ```memutil.cpp``` and ```mykmod_main.c``` submitted by us from the google classroom to home directory. Copy each file to their respective directories using following commands.
```
edith@edith-G7-7588:~$ scp memutil.cpp root@192.168.122.158:~/99_devmmap_paging/util/
root@192.168.122.158's password: 
memutil.cpp                                   100% 5841    11.5MB/s   00:00    
edith@edith-G7-7588:~$ scp mykmod_main.c root@192.168.122.158:~/99_devmmap_paging/kernel/
root@192.168.122.158's password: 
mykmod_main.c                                 100% 5453    10.8MB/s   00:00    
edith@edith-G7-7588:~$ 
```

## Compiling
1. Change to the top level directory
2. Compile/Link the code to create kernel module and userspace utility
```
[root@cs3523 ~]# cd 99_devmmap_paging
[root@cs3523 99_devmmap_paging]# make
make[1]: Entering directory `/root/99_devmmap_paging/kernel'
make -C /lib/modules/3.10.0-1127.10.1.el7.x86_64/build M=/root/99_devmmap_paging/kernel modules
make[2]: Entering directory `/usr/src/kernels/3.10.0-1127.10.1.el7.x86_64'
  CC [M]  /root/99_devmmap_paging/kernel/mykmod_main.o
  LD [M]  /root/99_devmmap_paging/kernel/mykmod.o
  Building modules, stage 2.
  MODPOST 1 modules
  CC      /root/99_devmmap_paging/kernel/mykmod.mod.o
  LD [M]  /root/99_devmmap_paging/kernel/mykmod.ko
make[2]: Leaving directory `/usr/src/kernels/3.10.0-1127.10.1.el7.x86_64'
make[1]: Leaving directory `/root/99_devmmap_paging/kernel'
make[1]: Entering directory `/root/99_devmmap_paging/util'
g++ -std=c++11 -I ../include -I ../lib -L ../lib -lrt -o memutil  memutil.cpp -g -lpthread
make[1]: Leaving directory `/root/99_devmmap_paging/util'
[root@cs3523 99_devmmap_paging]# 
```

## Running
1. To run and test the files, run the ```runtest.sh``` script.
```
[root@cs3523 99_devmmap_paging]# bash runtest.sh 
PASS - Test 0 : Module loaded with majorno: 243
PASS - Test 1 : Single process reading using mapping
PASS - Test 2 : Single process writing using mapping
PASS - Test 3 : Multiple process reading using mapping
PASS - Test 4 : Multiple process writing using mapping
PASS - Test 5 : One process writing using mapping and other process reading using mapping
PASS - Test 6 : One process writing to one dev and other process reading from another dev
[root@cs3523 99_devmmap_paging]# 
```

## Sample Outputs
```
[root@cs3523 ~]# cd 99_devmmap_paging/
[root@cs3523 99_devmmap_paging]# make
make[1]: Entering directory `/root/99_devmmap_paging/kernel'
make -C /lib/modules/3.10.0-1127.10.1.el7.x86_64/build M=/root/99_devmmap_paging/kernel modules
make[2]: Entering directory `/usr/src/kernels/3.10.0-1127.10.1.el7.x86_64'
  Building modules, stage 2.
  MODPOST 1 modules
make[2]: Leaving directory `/usr/src/kernels/3.10.0-1127.10.1.el7.x86_64'
make[1]: Leaving directory `/root/99_devmmap_paging/kernel'
make[1]: Entering directory `/root/99_devmmap_paging/util'
make[1]: `memutil' is up to date.
make[1]: Leaving directory `/root/99_devmmap_paging/util'
[root@cs3523 99_devmmap_paging]# bash runtest.sh 
PASS - Test 0 : Module loaded with majorno: 243
PASS - Test 1 : Single process reading using mapping
PASS - Test 2 : Single process writing using mapping
PASS - Test 3 : Multiple process reading using mapping
PASS - Test 4 : Multiple process writing using mapping
PASS - Test 5 : One process writing using mapping and other process reading using mapping
PASS - Test 6 : One process writing to one dev and other process reading from another dev
[root@cs3523 99_devmmap_paging]# cat test0-dmesg.txt 
[ 6616.018728] mykmod loaded
[ 6616.018736] mykmod initialized at=ffffffffc07b0280
[ 6616.018743] register character device 243
[root@cs3523 99_devmmap_paging]# 
```