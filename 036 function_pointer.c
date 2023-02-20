#include<stdio.h>
int sum(int a,int b)
{

     return a+b;
}
int main(){

     printf("The sum is  %d\n",sum(1,2)); 

     int(*fptr)(int,int);     //Creating the function pointer
     fptr=&sum;               //Pointing the pointer 
     int d=(*fptr)(4,6);      //De-referencing the pointer function
     printf("The value of d is %d\n",d); 
return 0;
}
