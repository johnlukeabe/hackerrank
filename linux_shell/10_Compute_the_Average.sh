#!/bin/bash

read cnt

sum=0
while read -r line || [ $i -lt $line ]; do
	((sum+=$line))
	((i++))
done

avg=$(echo "scale=4; $sum/$cnt" | bc)
printf "%.3f" $avg
