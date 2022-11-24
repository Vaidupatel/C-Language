/*
-------------------->ACTUAL AND FORAMAL PARAMETER<--------------------
-->When the function is called, the value (expression) that are passed in the call are called the argument or actual parameter.
-->Variable wich are passed as arugument in main function is called as actual parameter.
-->Formal parameter are local variable wich are assigned value from the argument when the function is called.
-->Variable wich are copies, in function from the function calling are called formal parameter.
-------------------->TYPES OF FUNCTION CALL IN C PROGRAMING<--------------------
-->In C programing language, we can call function in two different way, based on how we specify the arguments,
and these two ways are,
-->Call by Values.
--> Call by Reference. 

----->CALL BY VALUE<-----
-->When we call function by value, it mean that we are passing the value of arguments wich are copied in to the formal parameter of function.
--> Wich mean that the orignal value remain unchanged and only the parameters inside the function change.

----->CALL BY REFERENCE<-----
--> The call by reference method passing argument to C function copies the address of  the argument in to  the formal parameters.
-->Address of the actual arguments are copied and then assigned to the corsponding formal parameter.
*/

#include<stdio.h>
void change(int* address)
{
     int a=5;
 *address=++*address; // incrementing value at address pointed by 'address' and store value
}
int main(){
int a=34,b=76;
printf("The avlue of a is now %d\n",a); // it will print the value of a
change(&a);
printf("The avlue of a is now %d\n",a); // it will print the value of a after any update that occure in function
return 0;
}
