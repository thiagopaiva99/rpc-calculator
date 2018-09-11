gcc
sudo apt-get install gcc
sudo apt-get install g++
cd Documentos/
ls -l
gcc exe03.c 
ls -l
./a.out 
cd Documentos/
cd ..
gedit teste.c &
bg 
ls -l
gcc teste.c 
ls -l
./a.out 
gcc teste.c 
./a.out 
gcc teste.c 
./a.out 
gcc teste.c 
./a.out 
gcc teste.c 
./a.out 
gcc teste.c 
./a.out 
sudo apt-get install openmpi-bin 
sudo apt-get install libhdf5-openmpi-dev 
ls -l
cd calculadoraRPC/
ls -l
gedit calculadora.x 
rpcgen calculadora.x 
ls -l
gcc calculadora_servidor.c calculadora_svc.c calculadora_xdr.c -o server
ls -l
gcc calculadora_simples.c calculadora_clnt.c calculadora_xdr.c -o client -lnsl
ls -l
rm server 
ls -l
gcc calculadora_servidor.c calculadora_svc.c calculadora_xdr.c -o server -lnsl
ls -l
ps aux | grep rcpbind
sudo apt-get install rcpbind
sudo apt install rcpbind
cd /sbin/rcpbind
sudo apt install rcpbind
sudo apt update 
sudo apt-get update 
sudo apt install rcpbind
cd /sbin/
ls -l
netstat -an | grep 111
sudo apt install net-tools
netstat -an | grep 111
cd ~
ls -l
cd calculadoraRPC/
ls -l
sudo ./server &
sudo apt-get install rcpbind
ps aux | grep rcpbind
sudo apt install rcpbind
sudo apt install net-tools
sudo apt edit-sources
sudo apt-get update
sudo apt install rpcbind
sudo ./server &
./client localhost 24 11
ps aux | grep rcpbind
sudo apt edit-sources
top
ps
make
nano ~/.bash_history 
sudo chmod 777 build.sh 
./build.sh 
