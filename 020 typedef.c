#include<stdio.h>
typedef struct student
{
     int id;
     int marks;
     char fav_char;
}std;

int main(){

std s1,s2,s3;  // using new name "std" behalf of "struct student"
s1.id=508;
s1.marks=45;
s1.fav_char='a';
s2.id=5089;
s2.marks=450;
s2.fav_char='b';
s3.id=5080;
s3.marks=451;
s3.fav_char='c';


printf("s1's id= %d\n",s1.id); 
printf("s2's id= %d\n",s2.id); 
printf("s3's id= %d\n",s3.id); 

printf("s1's marks = %d\n",s1.marks); 
printf("s2's marks = %d\n",s2.marks); 
printf("s3's marks = %d\n",s3.marks); 

printf("s1's fav_char= %c\n",s1.fav_char); 
printf("s2's fav_char= %c\n",s2.fav_char); 
printf("s3's fav_char= %c\n",s3.fav_char); 
return 0;
}
