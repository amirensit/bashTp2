#include <sys/types.h>
#include <wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int argc, char* argv[] )
{
	int r=argc;
	int i=1;
	int t=0;
	for( int cpt=0;cpt<r;cpt++)

	if (i>0){ i=fork(); t++; }
	///////////////////////////////////////////////////////////
	if(i==0) execl(argv[t],argv[t],NULL);
	int p;
	while( (p=wait(0)>0) )
	printf("je suis le père \n");
	
}
