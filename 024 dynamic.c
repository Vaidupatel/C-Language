#include<stdio.h>
#include<stdlib.h>  // To use calloc, melloc, reslloc & fre() 
#include<stdio.h>
int main(){

//Use of malloc
int *ptr;
int n;

printf("Enter the size of array(BY MALLOCK)\n"); 
scanf("%d",&n);

ptr=(int*) malloc(n*sizeof(int));

for(int i=0;i<n;i++)
{
     printf("Enter the value at %d\n",i); 
     scanf("%d",&ptr[i]);
}
for(int i=0;i<n;i++)
{
     printf("Value at %d is %d  \n",i,ptr[i]); 
}
//Use of free
free(ptr);

// Use of calloc
// int *ptr;
// int n;

printf("Enter the size of array(BY CALLOCK)\n"); 
scanf("%d",&n);

ptr=(int*) calloc(n,sizeof(int));

for(int i=0;i<n;i++)
{
     printf("Enter the value at %d\n",i); 
     scanf("%d",&ptr[i]);
}
for(int i=0;i<n;i++)
{
     printf("Value at %d is %d  \n",i,ptr[i]); 
}

// Use of realloc

printf("Enter new the size of array\n"); 
scanf("%d",&n);

ptr=(int*) realloc(ptr,n*sizeof(int));

for(int i=0;i<n;i++)
{
     printf("Enter new the value at %d\n",i); 
     scanf("%d",&ptr[i]);
}
for(int i=0;i<n;i++)
{
     printf("New value at %d is %d  \n",i,ptr[i]); 
}


return 0;
}
