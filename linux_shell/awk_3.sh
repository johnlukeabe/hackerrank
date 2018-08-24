#!/usr/bin/env bash

awk '{
	avg = ($2+$3+$4) / 3;
	print $1,$2,$3,$4,":",(avg >= 80? "A" : (avg >= 60? "B" : (avg >= 50? "C" : "FAIL")))
	}'
