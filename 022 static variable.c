#include<stdio.h>
int func1(int b)
{    
     static int myvar=0;      //int myvar=0;
     printf("The value of myvar is %d \n",myvar); 
     myvar++;
     return b+10;
}
int main(){
     int b=455;
     int val=func1(b);
     val=func1(b);
     val=func1(b);
     val=func1(b);
     val=func1(b);
return 0;
}
