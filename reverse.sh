#!/bin/bash

echo "Enter Number"
read num
n= $num
rev = 0
while[$num-gt0]
do
  r=`expr$num%10`
  rev=`expr$rev\*10+$r`
  num=`expr$num/10`
done
   echo "Reverse of $n is $rev"
