#!/bin/bash

echo "Enter first Digir of your id"

read id1

echo "Enter The Second Digit of your ID"

read id2

echo "Enter The Third digit of your id"

read id3

echo "Enter 4 digit of your id"
read id4

echo "sum=$[$id1+$id2+$id3+$id4]"


if [$sum % 2==0]
then    
echo "Even"
else
        echo "ODD"
fi

