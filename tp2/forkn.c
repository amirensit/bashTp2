
   #include <sys/types.h>
    #include <wait.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    
    
    int main(int argc, char* argv[] )
    {
   
    int i=1;

    
    for (int cpt=0;cpt<atoi(argv[1]);cpt++)
    {		
      if (i>0) 
      {
	
    	i=fork();
	
    	
      }
	}
   
    //////////////////////////////////////////////////

    
      if(i==0)
      {  
	
	
	
	int r=getpid();
	char ch1[10];
	sprintf(ch1,"%d",r);
	execl(argv[2],argv[2],ch1,NULL); 
			
    	
      }

int pid;
    while ((pid=wait(0)) >0) 
	printf("je suis le père,mon fils vient de terminer de pid %d\n",pid);
	
      
}
