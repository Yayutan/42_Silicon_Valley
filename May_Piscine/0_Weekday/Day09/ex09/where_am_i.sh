#!/bin/sh
set i = $(ifconfig | grep -E '[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}' | wc -l | bc)
if [ $i -e 0 ]
then
	echo "I am lost!"
else
	ifconfig | grep -E '[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}' | cut -d" " -f 2
fi	
