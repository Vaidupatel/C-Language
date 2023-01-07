#include<stdio.h>
int main(){
int a=34;
int *ptr=&a;
if(ptr!=NULL)
{
printf("The address of a is %d\n",*ptr); 
}
else
{
     printf("The pointer is null and cant be dereference\n"); 
}
return 0;
}
