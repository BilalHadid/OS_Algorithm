#!/bin/sh
read a
read b
read c
read d
echo "sum=$[$a+$b+$c+$d]"
n=$sum
if [ $(( n % 2 )) -eq 0 ]; then
    printf '%s\n' "Number $n is Even"
else
    printf '%s\n' "Number $n is Odd"
fi

