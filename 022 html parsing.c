#include<stdio.h>
#include<string.h>
void parser(char * string)
{

     int in =0; //variable to track wather we are inside  the tag
     int index=0;
    for(int i=0;i<strlen(string);i++)
    {
          if (string[i]=='<')
          {
               in =1;
               continue;
          }
          else if(string[i]=='>')
          {
               in=0;
               continue; 
          }
          if(in==0)
          {
               string[index]=string[i];
               index++;
          }
    } 
    string[index]='\0';

    //removing the traling space from beginig
    while(string[0]==' ')
    {
     //Shift the string to the left
    for(int i=0;i<strlen(string);i++)
    {
          string[i]=string[i+1];
    }
    }
    
    //removing the traling space from END
    while(string[strlen(string)-1]==' ')
    {
     //assing null charecter to last
    string[strlen(string)-1]='\0';
    }
}
int main(){

     char string[]="<h1>     This is a hadding   </h1>";
     parser(string);
     printf("The parsed string is ~~%s~~\n",string); 
return 0;
}
