#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <wait.h>

int main()
{
int i,nb,k,pid;char *ch;
i=fork();
if (i == 0 )
{
pid=getpid();
sprintf(ch,"%d",pid);
execl("/home/KHouloud/trait","trait",ch,NULL);
}
else
{
int *status;
wait(status);
printf("je suis le pére mon pid est %d et le pid de mon fils est %d \n",getpid(),i);
}
}
