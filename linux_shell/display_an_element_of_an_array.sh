#!/usr/bin/env bash

i=0
declare -a array
while read -r array[i];
do
	((i++))
done

echo ${array[3]}
