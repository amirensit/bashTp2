#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <wait.h>

int main(int argc,char* argv[])
{int nb,k,n;
n=atoi(argv[1]);
nb=n % 10 ; 
for(k=nb;k>0;k--)
{
printf("le temps qui rester à vivre est %d \n ",k);
sleep(1);
}
}
