#include<stdio.h>
int main(){
int a=345;
float b=3.7;
void *ptr;
ptr=&b;
ptr=&a;

printf("The value of a is:%d\n",*( (int *)ptr )); 
printf("The value of b is:%f\n",*( (float *)ptr )); 
return 0;
}
