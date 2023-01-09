#include<stdio.h>
#include<stdlib.h>
int main(){
int a=334;
int *ptr;// this is a wild pointer
// *ptr=34;// this is not good thing to do
ptr=&a;//ptr is non longer a wild
printf("The value of a is %d\n",*ptr); 
return 0;
}
