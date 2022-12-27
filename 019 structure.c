#include<stdio.h>
struct student
{
     int id;
     int marks;
     char fav_char;
};

int main(){

struct student vaid,prince,darshan,sahil,abhay,jay;
vaid.id=508;
prince.id=515;
darshan.id=491;
sahil.id=510;
abhay.id=143;
jay.id=735;

vaid.marks=508;
prince.marks=515;
darshan.marks=491;
sahil.marks=510;
abhay.marks=143;
jay.marks=735;

vaid.fav_char='a';
prince.fav_char='b';
darshan.fav_char='c';
sahil.fav_char='d';
abhay.fav_char='e';
jay.fav_char='f';


printf("vaid got %d marks \n",vaid.marks); 
printf("vaid got %d id \n",vaid.id); 
printf("vaid got favourite character %c \n",vaid.fav_char); 
return 0;
}
