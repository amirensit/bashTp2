#include <sys/types.h>
#include <wait.h>
#include <stdio.h>
#include <unistd.h>


int main()
{
int i=fork();
int val=4;
if (i==0)
	{

	int r=getpid()%10;

	for(int cpt=r-1;cpt>=0;cpt--)
	{
	printf(" il reste %d secondes \n",cpt);
	
	}
	exit(val);
                  
	}
else if (i==1)
	{
	wait(&val);
	
	}

}
