#include<stdio.h>
#include<stdlib.h>
int main(){
     int chars,i=0;
     char *ptr;
     char a,b;
     while(i<3)
     {
          printf("Enter the number of character in yor employee id\n"); 
          scanf("%d",&chars);

          printf("Enter the vaue of a\n"); 
          /*
          In this type of condition when we press   enter for input first input will taken, but after this enter will gose in input buffer and next all input will consider enter key as valid input for %c.
          */
          scanf("%d",&a);
          getchar();     
          /*
          To avoid this type of glitch add getchar after sacn function
          */
          printf("Enter the vaue of b\n"); 
          scanf("%d",&b);
          getchar();

          ptr=(char *) malloc((chars+1)*sizeof(char));
          printf("Enter your employee id\n"); 
          scanf("%s",ptr);
          printf("Your Employee id is %s\n",ptr); 
          free(ptr);
          i=i+1;
     }
return 0;
}
