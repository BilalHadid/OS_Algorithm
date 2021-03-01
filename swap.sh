#!/bin/bash

echo "Enter First Number"
read num1
echo "Enter Second Number"
read num2

echo "First before swaping $num1 and second is $num2"
num1=$((num1+num2))
num2=$((num1-num2))
num1=$((num1-num2))
echo "First after Swaping is $num1 and second is $num2"
