#include<stdio.h>
#include<stdlib.h>
void main(){
	int i;
	printf("%ld Bytes of int ", sizeof(int));
	
	printf("\n Allocating memory using malloc \n ");
	int *m = (int *) malloc(5*sizeof(int));
	printf("checking %p",m);
	for (i = 0; i<5; i++)
		printf("%d \n", *(m+i));
		
	printf("\nAllocating memory using calloc\n");
	int *c = (int *)calloc(5 , sizeof(int));
	for(i=0;i<4;i++)
		printf("%d value at adress %p \n", *(c+i),(c+i));
		
	printf("\nNew Size of Dynamic memory\n");
	c = realloc(c, 10 * sizeof(int));
	for(i=0;i<10;i++)
		printf("%u adress at %p\n", *(c+i),(c+i));
	
}
