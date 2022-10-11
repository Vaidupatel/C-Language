#include<stdio.h>
int main(){

     // DO-WHILE LOOP
     int n,index=0;
     printf("Entert the number \n" );
     scanf("%d",&n);

     do{
          printf("%d\n",index);
          index++;
     }while(index<n);
//----------------------------------------------------------------

     //WHILE LOOP
     int i=0;
     while(i<30){
          printf("%d\n",i);
          i++; 
     }

//----------------------------------------------------------------

     //FOR LOOP

     for(int j=0,i=0;j<3,i<5;j++,i++) //Expression 1 & 3 is optional but Expression 2 is optional at break statement 
          {
               printf("%d %d\n",i,j);        
          }


     return 0;
}
