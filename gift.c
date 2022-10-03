#include<stdio.h>
int main()
{
     int a;
     printf("::How many subject yo have passed?::\n Type 1 for Science\n Type 2 for maths\n Type 3 for both\n");
     scanf("%d", &a);
     if(a==1)
     {
          printf("--::Congratulations!!! You won gift wroth of 15$ ::--\n");
     }
     else if(a==2)
     {
          printf("--::Congratulations!!! You won gift wroth of 15$ ::--\n");         
     }
     else if(a==3)
     {
          printf("--::Congratulations!!! You won gift wroth of 45$ ::--\n");
     }
     else
     {
          printf("!!Please enter valid choice!!\n");
     }
}
