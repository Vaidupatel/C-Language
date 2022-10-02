#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a=8;
    float b=5.666;
    printf("The vale of a is = %d and the value of b is = %f\n",a,b);
    printf("%.3f\n",b);
    printf("Print value of b in the length of 10 charcter with accuracy of 3 decimal %10.3f\n",b);
    printf("Print value of b in the reverse length of 10 charcter with accuracy of 3 decimal %-10.3f like this\n",b);
    
    // More formate specifire 
    // %c for characters
    // %d for integer
    // %f for float
    // %l for long
    // %lf for double
    // %Lf for long double
 
    return 0;

}
