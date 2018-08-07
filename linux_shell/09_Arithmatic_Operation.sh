#!/bin/bash

read line
ret=$(echo "scale=4; $line + 0.0005" | bc)
printf "%.3f" $ret
