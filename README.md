# deka.v2
deka.v2 connect telnet via port forwarding (6666)

# Installition: 

sudo add-apt-repository ppa:deadsnakes/ppa

sudo apt update

sudo apt install python3.7 python3.7-dev nvidia-utils-515-server xserver-xorg-video-nvidia-515

sudo python3.7 -m pip install pyopencl numpy scipy

git clone https://github.com/Mini0com/deka.v2

cd deka.v2

./genkernel64.sh > slice.c

sed -i -e 's/3.5m/3.7m/g' Makefile

make

# usage:

sudo paplon-portforwarding.py 

sudo python3.7 oclvankus.py

sudo ./delta_client.py

sudo openvpn (configuration file portmap) 

sudo telnet (ip portmap) (port portmap)
