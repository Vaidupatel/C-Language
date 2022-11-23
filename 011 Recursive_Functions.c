/*
-->recursive functon or recursion is a process  when a function calls a copy of itself to work on a smaller problem.
-->Any function wich calls it self is called recursive function.
-->This makes  the life of programmer easy by dividing the  problem in to easier.
-->A termination condition is imposed on such function to stop them executind copies of themselves forever.
-->Any problem that can slove recursively,can also be sloved itaritively.
-->However, some problem are best suited to be solved using recursion.
-->For example, tower of hanoi, fibonacci series, factorial finding, etc.
*/
#include<stdio.h>
     int factorial(int num)
     {
          if (num == 0||num == 1)
          {
               return 1;
          }
          else 
          return num * factorial(num-1);
     }
int main(){
     int num;
     printf("Enter the number you want the factorial of\n");
     scanf("%d",&num);
     printf("The factorial of %d is %d\n", num, factorial(num) );
     
     return 0;
}
