#!/usr/bin/env bash

read
read -a array
echo ${array[@]} | tr ' ' '\n' | sort | uniq -u
