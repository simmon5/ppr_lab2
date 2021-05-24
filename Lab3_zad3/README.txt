Kolejnosc:
sudo apt-get update
sudo apt install rpcbind

w katalogu "czesc 1 "
make
./app_server


w katalogu "czesc 2 "
make
./app_client 127.0.0.1


w katalogu "czesc 1 "
./app_client 127.0.0.1

w tym procesie nalezy podawac nasze dane 
