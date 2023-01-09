#include<stdio.h>
#include<stdlib.h>
int* dangptr()
{
     int a,b,sum;
     a=34;
     b=364;
     sum=a+b;
     return &sum;

}
int main(){
//case 1: deallocaton of memory
int* ptr=(int*)malloc(7*sizeof(int));
ptr[0]=12;
ptr[1]=112;
ptr[2]=122;
ptr[3]=121;
free(ptr); //ptr is now dangling

// case 2:function returing local variable address
int*myfunc=dangptr(); //dangptr is now dangling

// case 3: if variable goes out of scope
int *danglingptr3;
{
     int a=12;
     danglingptr3=&a;
}
//Heare variable goes out of scoope
//dangling ptr3 is pointint to a location wich is freed hance danglingptr3 is now dangling pointer
return 0;
}
