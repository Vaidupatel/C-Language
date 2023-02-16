#include<stdio.h>
int main(){
     FILE *ptr=NULL;
     /*****Reading a file*****/

     // char v[30];
     // ptr=fopen("testfile.txt","r"); //This file opem im reading mode
     // fscanf(ptr,"%s",v);      
     // //Whatever contant in file is store in variable 'v' wich hase data type '%s'
     // //This can not read white space
     // printf("The file has this contant::-- %s\n",v);
     
     /*****Writing a file *****/
     // char b[100]="Hii! We are adding some text to opened file. It wil remove previous data and overlap new data.";
     // ptr=fopen("testfile.txt","w"); //It will open the file in write mode
     // fprintf(ptr,"%s",b);
     // //What ever contant stored in variable'b' wich hase data type '%s' is written in file denoted by pointer 'ptr' by using function 'fprintf'

     // //To overcome this problem we can open file in append mode
     // char g[100]="It will write data in file, but previous data will note erase ";
     // ptr=fopen("testfile.txt","a"); //It will open the file in append mode
     // fprintf(ptr,"%s",g);

return 0;
}
