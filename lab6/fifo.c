#include<stdio.h>
void main()
{
int bt[20], wt[20], tat[20], i, n=4;
float avgwt=0,avgtat=0;
bt[0] = 6;
bt[1] = 8;
bt[2] = 7;
bt[3] = 3;

wt[0] = 0;
tat[0] = bt[0];

	for(i=0; i<n; i++)
	{
		wt[i] = wt[i-1] + bt[i-1];
		tat[i] = tat[i-1] + bt[i];
		
		avgwt = avgwt + wt[i];
		avgtat = avgtat + tat[i];
				
}
printf("\t Proccess \tBurst Time \t Waiting Time \t Turnarround Time");
for(i=0; i<n;i++)
	printf("\n\t P%d\t\t %d \t\t %d \t\t %d", i, bt[i], wt[i],tat[i]);
avgwt = avgwt / 3;
avgtat = avgtat / 3;
printf("\n\n Avg of Waiting time :%f \n",avgwt);
printf("\n'n Avg Of Turnarround time : %f \n", avgtat);

}
