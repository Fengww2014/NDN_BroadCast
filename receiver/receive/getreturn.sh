#! /bin/sh
#get cmd return value
info=`cat Array.txt`
echo "info:" ${info}
ping ${info}
