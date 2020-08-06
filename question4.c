#include<stdio.h>
#include<stdlib.h>
void main(){
	int i;
	printf("%ld Bytes of int ", sizeof(int));
	
	printf("\n Allocating memory using malloc \n ");
	int *m = (int *) malloc(13*sizeof(int));
	printf("checking %p",m);
	for (i = 0; i<13; i++)
		printf("%d \n", *(m+i));
		
	printf("\nAllocating memory using calloc\n");
	int *c = (int *)calloc(13 , sizeof(int));
	for(i=0;i<13;i++)
		printf("%d value at adress %p \n", *(c+i),(c+i));
	printf("\nNew Size of Dynamic memory\n");
	c = realloc(c, 26 * sizeof(int));
	for(i=0;i<26;i++)
		printf("%u adress at %p\n", *(c+i),(c+i));
	
}
