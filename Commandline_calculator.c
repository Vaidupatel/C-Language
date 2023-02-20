#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]){

     char *operation;
     int num1,num2;
     operation=argv[1];
     num1=atoi(argv[2]);
     num2=atoi(argv[3]);

     // printf("Operation is %s\n",operation); 
     // printf("num2 is %d\n",num2); 
     // printf("num1 is %d\n",num1); 

     if(strcmp(operation,"add")==0)
     {
          printf("%d\n",num1+num2); 
     }
     else if(strcmp(operation,"sub")==0)
     {
          printf("%d\n",num1-num2); 
     }
     else if(strcmp(operation,"mul")==0)
     {
          printf("%d\n",num1*num2); 
     }
     else if(strcmp(operation,"div")==0)
     {
          printf("%d\n",num1/num2); 
     }
     else 
     {
          printf("!!Please ente the correct operation\n"); 
     }

return 0;
}
