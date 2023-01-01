#include<stdio.h>
#include<string.h>
union student
{
     int id;
     int marks;
     char fav_char;
     char name[34];
};
int main(){

     union student s1;
     s1.id = 1;
     s1.marks =45;
     strcpy(s1.name ,"vaidik");
     s1.fav_char='u' ;

     printf("The id is %d\n", s1.id); 
     printf("The marks is %d\n", s1.marks); 
     printf("The name is %s\n", s1.name); 
     printf("The fav_char is %c\n", s1.fav_char); 

     // in a union at a time we can use only one memory among all data type
     // among all data type last one is trggered and all other are currept

return 0;
}
