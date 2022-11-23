#include<stdio.h>
int main(){
     //BREAK 
     int i,age;
     for(i=0; i<10; i++){
          printf("%d\n Enter your age \n", i);
          scanf("%d",&age);
          if(age>10)
          {
               break;
          }
     }

     //CONTINUE 
     for(i=0; i<10; i++){
          printf("%d Enter your age\n", i);
          scanf("%d",&age);
          if(age>10)
          {
               continue;
          }
          printf("We have not come ccross any continue statments\n ");
     }

     return 0;
}
