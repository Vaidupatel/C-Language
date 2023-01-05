#include<stdio.h>
// #include "temp.c"

// int sum; // Global/external var
int myfunc(int a, int b)
{
     // auto int sum;  //By defalult auto if we dont write auto
     extern int sum;
     // sum=a+b;
     return sum;
}
int sum=498;
int main(){
     //Declaration--> Telling the compiler about the variable (No space reserved)
     //Defination-->Declaration + space reservation

     int sum =myfunc(3,4);
     printf("The sum is %d\n",sum ); //Gives an error besause sum var in myfunc is auto/local variable

      
return 0;
}
