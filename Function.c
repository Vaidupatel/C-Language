/* 
-->function are used to divide a large C program into smaller pieces.
-->a function can be called multiple time to provide reusability and modularity to the C program.
-->also called procedure or subroutine.
SYNTEXT:
-->return_type function_name(data_type parameter 1,data_type parameter 2...)
{
     //code to be executed
}
-->we can avoide rewriting same logic through function.
--> we can divide work among programmers using function.
-->we can easily debug a program using function.
DECLARTION,DEFINATION AND CALL:
-->a functon is declared to tell a compiler about existence.
-->a function is define to fet some task done.
-->a function is called in order to be used.
TYPES OF FUNCTION
(1) without argument and without return type.
(2) without argument and with return type.
(3) with argument and without return type.
(4) with argument and with return type.
*/

#include<stdio.h>
int sum(int a, int b);   //This is called function prorotype, like declaration
//with argument and without return type.
void printstar(int n)
{
for(int i = 0; i < n; i++)
{
     printf("%c ", '*');
     printf(" \n");
}
}
// without argument and with return type
int takenumber()
{
     int i;
     printf("Enter a number\n");
     scanf("%d", &i);
     return i;
}
// without argument and without return type
void print()
{
     int i;
    for(i=0;i<10;i++) 
    {
     printf(" * ");
    }
}
int main(){
     int a,b,c,d; 
     a=9;
     b=97;
     c=sum(a,b); // functon calling
     printf("%d\n",c);
     printstar(5); // functon calling
     d=takenumber(); // functon calling
     printf("The number is %d\n",d);
     print(); // functon calling

     return 0;
}
// with argument and with return type
int sum(int a, int b)
{
return a + b;
}
