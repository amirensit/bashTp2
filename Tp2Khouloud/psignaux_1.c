#include<stdio.h>
#include<signal.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/wait.h>
void afficher(int i)
{
printf ("le signal est capturé \n");

}

void main()
{
printf("le pid est %d \n",getpid());
signal(SIGUSR1,afficher);
while(1){};
}
