# NDN_BroadCast
毕设ndn自组织网络
BROADCAST NDN ADHOC
文件中的可执行程序已经编译 




修改地方：
1，广播地址：BC_IP.cpp
2.自身IP：self_ip.sh
3.shell脚本 destroy.sh and create.sh
编译：g++ -o BC_send BC_ip.cpp file_open.cpp
     g++ -o BC_receiver receiver.cpp Array2File.cpp get_ip_number.cpp
         
