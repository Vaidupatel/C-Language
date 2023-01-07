#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int genarateRandomNumber(int n)
{
     /*Function of stdlib.h to genarate random number
       srand take a number as a input called seed.
       time(NULL) will return the time in seconds*/
     srand(time(NULL));  
     return rand()%n;
}
int main(){


     /*Any number after % like bellow is limit for random number*/
     printf("The random number between 0 to 100 is:-%d\n",genarateRandomNumber(100)); 

return 0;
}
