// WHAT IS POINTER?
// -->Is variable wich stores address of another variable
// -->Can be type of int,char,array,function or any other pointer.
// -->Size depend on architacture.
// -->Pointer in C programinig language can be declared using *(asterisk symbol).
// -->Address of '&' returns the address of a variable.
// -->* is dereference operator(also called indirection operator) used to get value at a given address.
// -->For example :- *P it mean that value of that variable whose address is store at address of P.
// -->For example :- &A it mean that address of A in the memory.

#include<stdio.h>
int main(){

int a=76;
int* ptra=&a;

// value of a
printf("The value of a is %d\n",a); 

// address of pointer ptra
printf("The adress ptra is %d\n",&ptra); 

// print the value(hear, a=76), whose address(hear,address of a, &a) is stored at pointer (hear, ptra, *ptra). 
printf("The value of 'a' point by the pointer 'ptra' wich point the address of a '&a' is %d\n",*ptra); 

//print the address of a by &a,, %x print the hexadecimal value.
printf("The address of a wich taken by &a is %x\n",ptra); 

// -->The pointer that not assigned any value but NULL is known as NULL pointer.
// -->In a computer programimng. a null pointer is pointer that does not point to any object or function.
// -->We can use it to initialize a pointer variable when the pointer variable is't assigned any  valid memory address yet.
// --> int* ptr=NULL;


int *ptr;
int *ptr2=NULL;

// it gives the garbage value because of no value is assigned to ptr.
printf("The address of any garbage value is %p\n",ptr); 


//it gives the 0000 because there is null is assigned to ptr2.
printf("The address of NULL pointer is %p\n",ptr2); 

// -->USE OF POINTER <--
// -->Dynamic memory allocation
// -->Array,function and structure
// -->Return multiple value from a function
// -->Pointer reduce the code and improve the performance.

return 0;
}

