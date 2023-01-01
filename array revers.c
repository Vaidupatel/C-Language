#include<stdio.h>
void array_rev(int arr[])
{
     int temp;
     for(int i=0;i<8/2;i++)        //We have to swap throgh half of array 
    {
          //swap iteam (i) with iteam (7-i)  
          temp=arr[i];
          arr[i]=arr[7-i];
          arr[7-i]=temp;
    }

}
void arrayprint(int arr[])
{
     for(int i=0;i<8;i++)
    {
     printf("The value of element %d is %d\n",i,arr[i]); 
    }

}

int main(){

     int arr[]={1,2,3,4,5,6,67,68};
     printf("\nBefor reversing array\n"); 
     arrayprint(arr);
     array_rev(arr);
     printf("\nAfter reversing array\n"); 
     arrayprint(arr);
    
return 0;
}
