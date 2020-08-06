#include <stdio.h>
# include <stdlib.h>
#include <unistd.h>

void main(){
int cid, cid1,cid2;

cid = fork();

if(cid == 0) {
	sleep(3);
	printf("child[1] --> cid = %d and ccid = %d\n",getpid(), getppid());
	}
else{
cid1 = fork();
if(cid1 ==0){
	sleep(2);
	printf("child[2] --> cid = %d and ccid = %d\n",getpid(),getppid());
	}
else{
	cid2 = fork();
	if(cid2 == 0){
		printf("child[3] --> cid = %d and cpid= %d\n",
		getpid(),getppid());
		}
	else{
		sleep(3);
		printf("Parent --> cid = %d\n",getpid());
		}
		}
		}

}
