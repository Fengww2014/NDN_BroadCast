#! /bin/sh
#get cmd return value
info=`cat num_i.txt`
echo "info:" ${info}
#cat Array.txt|cut -f 4 -d "." >ip_num.txt
nfdc face create udp://192.168.224.${info}
nfdc route add example/test udp://192.168.224.${info}
