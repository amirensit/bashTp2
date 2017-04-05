#include <sys/types.h>
#include <wait.h>
#include <stdio.h>
#include <unistd.h>


int main( )
{

int i=fork();

if (i==0)
	{char ch[10];
	int r=getpid();
	printf("je suis le fils %d\n", r);
	sprintf(ch,"%d",r);
	execl("/home/etudiant/tp2Amir/trait","trait",ch,NULL);
	
                  
	}
else if (i>0)
	{
	int p=wait(0);
	printf("je suis le père,mon fils vient de terminer de pid %d\n",p);
	
	}

}
