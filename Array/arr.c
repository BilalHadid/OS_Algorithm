#include<stdio.h>

void max_min(int a[],int n)
{
	int min,max,i;
	min=max=a[0];
	for(i=1;i<n;i++){
		if(min>a[i])
			min=a[i];
		if(max<a[i])
			max=a[i];
		}
printf("Minimum of array is : %d",min);
printf("Maximum of array is : %d",max);
}
void main()
{
int a[100],i,n,sum;
printf("Enter Size of array;");
scanf("%d", &n);
printf("Enter element in array : ");
 	for(i=0;i<n;i++){
 		scanf("%d",&a[i]);
 		}
 		max_min(a,n);
 		}

