#!/usr/bin/env bash

i=0
declare -a array
while read -r line;
do
	array[i]=$line
	((i++))
done

echo ${#array[@]}
