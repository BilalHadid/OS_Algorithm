#!/bin/bash

echo -n "Enter First Digit"
read n1
echo -n "Enter Second Digit"
read n2
echo "Enter Third"
read n3
echo -n "Enter numnber : "
read n4
sum=$[$n1+$n2+$n3+$n4]
 
rem=$(( $sum % 2 ))
 
if [ $rem -eq 0 ]
then
  echo "$sum even number"
else
  echo "$sum is odd number"
fi

