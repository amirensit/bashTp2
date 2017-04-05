#include <sys/types.h>
#include <wait.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc, char* argv[] )
{


int r=atoi(argv[1])%10;
for(int cpt=r-1;cpt>=0;cpt--)
	{
	printf(" il reste %d secondes \n",cpt);
	sleep(1);
	
	}
	exit(0);

}
