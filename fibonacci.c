#include<stdio.h>
int fib(int num)
{
     if(num==0||num==1)
     {
          return num;
     }
     else
     {
          return fib(num-1)+fib(num-2);
     }
}
int fib_it(int num)
{
     int a=0;
     int b=1;
  
    for(int i=0;i<num-1;i++)
    {
          b=a+b;
          a=(a+b)-a;     
    }
    return a;
}
int main(){
int num;
printf("Enter the number to calculate the febonacci\n");
scanf("%d",&num);
printf("fibonacci number from iterative aproch for index  %d is %d\n",num,fib(num));
printf("fibonacci number from recursive aproch for index  %d is %d\n",num,fib(num));
return 0;
}
