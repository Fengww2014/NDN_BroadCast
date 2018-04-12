#! /bin/sh
#destroy a route
info=`cat num_i.txt`
echo " ip info:" ${info}
#cat Array.txt|cut -f 4 -d "." >ip_num.txt
nfdc face destroy udp://192.168.224.${info}

