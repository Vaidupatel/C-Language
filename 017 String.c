#include<stdio.h>
void printstr1(char str[])
{
     int i=0;
     while(str[i]!='\0')
     {
          printf("%c",str[i]); 
          i++;
     }
     printf("\n"); 
}
int main(){
char str1[]={'v','a','i','d','i','k','\0'};
char str2[]="Vaidik";
char str3[50];
char str4[50];
char str5[50];

printstr1(str1);                   //Printing name by for loop
printstr1(str2);                   //Printing name by for loop
printf("Enter the name\n");        //Geting name using inbuilt function
gets(str3);
printf("Name:-"); 
printstr1(str3);
printf("Enter second the name\n"); //Geting name using inbuilt function
gets(str4);
printf("Second name:-"); 
printf("%s\n",str4);               //Printing name by printf function
printf("Enter third name:-"); 
gets(str5);
printf("Third name:-"); 
puts(str5);                        //Printing name by printf function



return 0;
}
