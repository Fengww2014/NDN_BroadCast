#! /bin/sh
#get self ip
#ifconfig ens33|grep 'inet addr:'|awk '{print $2}'
ifconfig ens33|grep 'inet addr:'|cut -f 2 -d ':'|cut -f 1 -d ' '
