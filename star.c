//Star patern
#include<stdio.h>

void star(int rows)
{
for(int i=0;i<rows;i++)
{
    for(int j=0;j<=i;j++)
    {
          printf("*"); 
    }
    printf("\n"); 
}
printf("\n"); 
}

void rstar(int rows)
{
for(int i=0;i<rows;i++)
{
    for(int j=0;j<=rows-i-1;j++)
    {
          printf("*"); 
    }
    printf("\n"); 
}

}

int main(){
int rows,type;
printf("Enter 0 for star patern and 1 for reverce star patern\n"); 
scanf("%d",&type);
printf("How many rows to print?\n"); 
scanf("%d",&rows);
switch(type)
{
     case 0:
          star(rows);
          break;
     case 1:
          rstar(rows);
          break;
     default:
          printf("you have entered invalid choice\n");
          break; 

}
return 0;

}
