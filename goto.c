#include<stdio.h>
int main(){
     // lable:
     // printf("We are inside lable\n");
     // goto end;
     // printf("Hello world!\n");
     // goto lable;

     // end:
     // printf("We are at end \n");

    int i;
    for(i=0;i<8;i++)
     
    {
          printf("%d\n",i);    
         int j,num;
         for(j=0;j<8;j++)
          
         {
         printf("Enter the number. enter 0 to exit \n"); 
         scanf("%d",&num);
         
               if(num==0)
               {
               goto end;
               }
          
         }
     
    }
    end:

     return 0;
}
