#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<signal.h>
void signalhandler(int);
int main()
{
	void (*sig_ptr)(int)=&signalhandler;
	signal(SIGINT, (*sig_ptr));
	while(1)
	{
		printf("Going to sleep....\n");
		sleep(1);
	}
	return 0;
}
void signalhandler(int signum)
{
	printf("Caught signal %d\n",signum);
	exit(1);
}

