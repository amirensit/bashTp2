#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <wait.h>

int main()
{
int i,nb,pid,k;
i=fork();
if(i == -1 )
printf("Erreur");
else
if (i == 0 )
{
pid=getpid();
nb=pid % 10 ;
for(k=nb;k>0;k--)
{
printf("le temps qui rester à vivre est %d \n ",k);
sleep(1);
}
exit(0);
}
else
{int *status;
wait(status);
printf("je suis le pére mon pid est %d et le pid de mon fils est %d \n",getpid(),i);
}
}
