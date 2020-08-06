#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

void *myThread(void *argp)
{
	sleep(1);
	printf("Thread Created");
	return NULL;
}

void main()
{
	pthread_t thread_id;
	printf("Before Thread \n");
	pthread_create(&thread_id,NULL,myThread,NULL);
	pthread_join(thread_id,NULL);
	printf("After My Thread \n");
}
