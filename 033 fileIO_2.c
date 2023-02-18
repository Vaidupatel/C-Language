#include<stdio.h>
int main(){

FILE *ptr=NULL;
ptr=fopen("testfile.txt","w");
// char c=fgetc(ptr);
// printf("The character i was read %C\n",c); 

// char str[34];
// fgets(str,8,ptr);
// printf("The string is %s\n",str); 

fputc('v',ptr);
fputs("hello!! this is vaidu",ptr);
return 0;
}
