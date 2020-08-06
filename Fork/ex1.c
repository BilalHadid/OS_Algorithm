#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

void main(int argc,char *argv[])
{
printf("Process ID of Ex1.c = %d \n",getpid());
char *args[] = {"Hello", "World","Academy"};
execv("./Ex2",args);
}
