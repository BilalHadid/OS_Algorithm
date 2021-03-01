#!/bin/bash

echo "Enter First number"
read v1
echo "Enter Second Number"
read v2

echo "sum1=$[$v1+$v2]"

echo "Enter Third Number"
read v3
echo "Enter Fourth Number"
read v4
echo "sum2=$[$v3+$v4]"

if [$sum1 == $sum2]
then
	echo "Equal"
else
	echo "Not Equal"
fi
