#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <wait.h>
#include<string.h>

int main(int argc,char * argv[])
{int i,n=1,pid;char ch1[10];
for(i=0;i<atoi(argv[1]);i++)
{ 
if( n > 0)
n=fork();
if (n == 0 )
{
printf("je suis le fils num %d \n ",i+1);
pid=getpid();
sprintf(ch1,"%d",pid);
execl(argv[2],argv[2],ch1,NULL);
}
}
for(i=0;i<atoi(argv[1]);i++)
{wait(0);
printf("le fils est de pid égale %d \n",n);}
return 0;
}

