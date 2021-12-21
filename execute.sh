#!/bin/bash
>out
echo "Enter Problem Code: ";read name
echo "Executing" *$name*
count=0
while read line 
do
    count=$(($count+1))
done<in
if [ $count -gt 0 ]
then
    g++ *$name* && ./a.out < in > out
    cat out 
else
    echo "NO INPUT!"
fi