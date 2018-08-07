#!/bin/bash

read -p "Do you think this site is ugly?" yn
case $yn in
	[Yy]) echo "YES";
		break;;
	[Nn]) echo "NO";
		break;;
esac

