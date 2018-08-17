#!/usr/bin/env bash

i=0
declare -a array copy
while read -r array[i];
do
	((i++))
done

for i in {0..2};
do
	copy+=(${array[@]})
done

echo ${copy[@]}
