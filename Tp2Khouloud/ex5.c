#include<stdio.h>
#include<signal.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/wait.h>
char ch1[200];
char ch2[200];
void com1(int i)
{
system(ch1);
}
void com2(int i)
{
system(ch2);
}

void main()
{

printf("saisir une ligne de code shell \n");
scanf ("%s",&ch1);
printf("saisir la 2éme ligne de code shell \n");
scanf ("%s",&ch2);
int i,a;
i=fork();
if(i == 0)
{
signal(SIGUSR1,com1);
printf("le pid de la 1 ére fils %d \n ",getpid());
sleep(20);
}
else
if(i > 0)
{
sleep(5);
kill(i,SIGUSR2);
a= fork();
if( a == 0)
{
signal(SIGUSR2,com2);
printf("le pid de la 2éme fils est %d \n ",getpid());
sleep (20);}
else if( a > 0 )
{
sleep(5);
kill(a,SIGUSR1);

}
wait(0);
}
}



