#include<stdio.h>
#include<stdlib.h>
int sum(int a,int b)
{

     return a+b;
}
void hello(int (*fptr)(int,int))
{
printf("Hello users!\n"); 
printf("The sum of 5 and 7 is %d\n",fptr(5,7)); 
}

void GM(int (*fptr)(int,int))
{
printf("Good Morning users!\n"); 
printf("The sum of 5 and 7 is %d\n",fptr(5,7)); 
}
int main(){
/*
     printf("The sum is  %d\n",sum(1,2)); 

     int(*fptr)(int,float);     //Creating the function pointer
     fptr=&sum;               //Pointing the pointer 
     int d=(*fptr)(4,6.0);      //De-referencing the pointer function
     printf("The value of d is %d\n",d); 
*/
int(*ptr)(int,int);
ptr=sum;            //We can write & or not, because in function pointer it will be same
GM(sum);

return 0;
}
