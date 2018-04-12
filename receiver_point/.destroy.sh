#! /bin/sh
#get cmd return value
info=`cat Array.txt`
echo "info:" ${info}
cat Array.txt|cut -f 4 -d "." >ip_num.txt
nfdc face create udp://${info}
nfdc route add example/test udp://${info}
