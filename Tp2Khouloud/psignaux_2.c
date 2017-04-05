#include<stdio.h>
#include<signal.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/wait.h>

void test(int i)
{printf("foction test \n");}
void main()
{
int n=rand()%5;
printf("le pid est %d \n ",getpid());

signal(SIGALRM,test);
alarm(n);


for(;;);
}
