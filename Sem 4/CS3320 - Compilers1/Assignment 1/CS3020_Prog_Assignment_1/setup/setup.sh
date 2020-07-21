cp coolc spim /usr/bin/
chmod +x /usr/bin/coolc /usr/bin/spim
mkdir -p /usr/class/cs3020/cool/lib/
cp trap.handler /usr/class/cs3020/cool/lib/
if [ "$(uname -m)" = 'x86_64' ]; 
  then
  echo "Installing 32-bit SUpport"
  dpkg --add-architecture i386
  apt-get update
  apt-get install libc6:i386 libncurses5:i386 libstdc++6:i386
fi
