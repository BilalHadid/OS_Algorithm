#!/bin/bash
echo "Enter first number: "
read a
echo "Enter second number: "
read b
echo "Enter third number: "
read c
sum=`expr $a + $b + $c`
avg=`expr $sum / 3`
echo "Sum = $sum"
echo "Average = $avg"
