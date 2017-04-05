#include<stdio.h>
#include<signal.h>
int hh,mm,sc;
void tick(int i)
{
sc++;
if(sc == 60 ){sc=0;mm++;
if(mm == 60 ){mm=0; hh++;
if(hh == 24 ){hh=0;}}}
alarm(1);
printf("%d:%d:%d \n" ,hh,mm,sc);
}
void main()
{
signal(SIGALRM,tick);
alarm(1);
for(;;);
}
