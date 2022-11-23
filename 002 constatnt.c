#include <stdio.h>
#define Pi 3.14     /* This is the another type of difining the consatnt */ 
int main()
{
   
    //     If we write like this than it will overlap the value of b=5.568 to b=4.6769
    //     float b=5.568;
    //     b=4.6769;

    
    // If we write const key word befor variable than it will be the constatnt and we can't overlap its value 
    // const float b =5.6768;
    // b=4.97;


    printf("%f",Pi);        /* This print the value of Pi wich we difine as preprocessor */
    Pi=7.33                 /* this is invalid statement because as per structure of C language preprocessor are    exicute first and than we can't overlap it's value */

    return 0;
}
