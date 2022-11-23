#include<stdio.h>
int main()
{
     int age;
   printf("Enter your age: \n");
   scanf("%d", &age);
    
     int mark;
   printf("Enter your mark: \n");
   scanf("%d", &mark);





   switch (age) {
     case 3:
     printf("The age is 3\n");
     switch (mark) {
      case 45:
      printf("The mark is 45\n");
      break;
      default: printf("The mark is not 45\n");
     }
     break;
     case 13:
     printf("The age is 13");
     break;
     case 23:
     printf("The age is 23");
     break;

     default:
     printf("The age is not 3,13,23");
     break;

   }
    return 0;
}

// Switch exprression must be an int or char 
// Case value must be an int or char
// Case must be come inside switch
// Break not must
