#!/bin/bash	

echo "Enter First Number"

read num1

echo "Enter Second Number"

read num2

echo "Enter Choice any one"
echo "1. Addition"
echo "2. Subtract"
echo "3. Multiply"
echo "4. Division"
read ch

case $ch in
	1)res=`echo $num1 + $num2 | bc`
	;;
	2)res=`echo $num1 - $num2 | bc`
	;;
	3)res=`echo $num1 \* $num2 | bc`
	;;
	4)res=`echo "scale=2; $num1 / $num2 | bc`
	;;
      esac
      echo "Result : $res"
