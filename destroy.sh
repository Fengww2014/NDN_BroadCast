#! /bin/sh
#destroy a route
info=`cat Array.txt`
echo "info:" ${info}
#cat Array.txt|cut -f 4 -d "." >ip_num.txt
nfdc face destroy udp://${info}

