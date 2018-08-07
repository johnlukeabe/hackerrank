#!/bin/bash

read l
read r

if [ $l -lt $r ]; then
	echo "X is less then Y"
elif [ $l -gt $r ]; then
	echo "X is greater then Y"
else
	echo "X is equal to Y"
fi

