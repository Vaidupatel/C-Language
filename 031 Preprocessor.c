#include<stdio.h>
#include"pointer.c"
#define pi 3.14
#define square(r) r*r
int main(){

float var=pi;
printf("This is pi %f\n",var); 
printf("The area of square is %f\n",pi*square(10)); 
printf("File name is %s\n",__FILE__); 
printf("Todays date is  %s\n",__DATE__); 
printf("Time now is %s\n",__TIME__); 
printf("Line number is %d\n",__LINE__); 
printf("ANSI:%d\n",__STDC__); 

return 0;
}
