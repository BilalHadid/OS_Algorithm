#include<stdio.h>
void main()
{
	int i,k,f,count=0,rs[25],m[10],n,top=0,flag=0;
	printf("\n Enter the length of reference string--");
	scanf("%d",&n);
	printf("\n Enter The reference string");
	for(i=0;i<n;i++)
		scanf("%d",&rs[i]);
	printf("\n Enter no. of frames--");
	scanf("%d",&f);
	for(i=0;i<f;i++)
		m[i]=-1;
	printf("\n The Page replacement Process is -- \n");
	for(i=0;i<n;i++)
	{
		flag=0;
		for(k=0;k<f;k++)
		{
		  if(m[k] == rs[i]){
		  flag=1;
		  break;
		  }
		}
	 
	 if(top ==f)
	 	top=0;
	 if(flag==0){
	    count++;
	    m[top] = rs[i];
	    top++;
	    }
	  for(k=0;k<f;k++){
	  	printf("\t%d",m[k]);
	  }
	  if(flag==0)
	  	printf("\tPF No. %d",count);
	  printf("\n");
	  }
	  printf("\n The Number of page fault using fifo are %d",count);
	  
}
