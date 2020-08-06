#include<stdio.h>
#include<unistd.h>

void main(){

fork();
fork();

printf("Process And Job \n Process ID : %d \n", getpid());

}
