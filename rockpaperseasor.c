#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int genarateRandomNumber(int n)
{
    
     srand(time(NULL));  
     return rand()%n;
}
int main(){
int i=0,n,ppoint=0,cpoint=0;
char name[10];

     printf("Enter the name of player:-\n"); 
     gets(name);
while(i<3)
{
     printf("Press :-\n1 for Rock\n2 for PAPER\n3 for SEASOR\n"); 
     scanf("%d",&n);

     int com=genarateRandomNumber(3);

     if(n==1&&com==2)
     {
          printf("computer win\n"); 
          cpoint++;
     }
     else if(n==1&&com==3)
     {
          printf("player win\n"); 
          ppoint++;
     }
     else if(n==2&&com==1)
     {
          printf("player win\n");
          ppoint++;
     }
     else if(n==2&&com==3)
     {
          printf("computer win\n");
          cpoint++; 
     }
     else if(n==3&&com==1)
     {
          printf("computer win\n");
          cpoint++; 
     }
     else if(n==3&&com==2)
     {
          printf("player win\n");
          ppoint++;
     }
     else
     {
          printf("Draw!!\n"); 
     }
     i++;
}
printf("TOTAL SCORE:-\n%s=%d\nCOMPUTER=%d\n",puts(name),ppoint,cpoint);
if(ppoint>cpoint) 
{
     printf("Congrattes!! %s You Won!!\n",name); 
}
else
{
     printf("Computer won\n"); 
}
return 0;
}
