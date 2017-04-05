#include <sys/types.h>
#include <wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
	int status =4;

	printf("I am the child process,my PID is  : %d \n",getpid());
	exit(status);

}
