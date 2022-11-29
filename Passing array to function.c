#include<stdio.h>
 /*
    //Reciving array as a parameter
int func1(int array[])
{
    for(int i=0;i<4;i++)
    {
    printf("The avlue at %d is %d\n", i, array[i]);
    printf("\n");
    }
    //If we change any value hear it gets reflected in main
    array[0] = 3888;
}


void func2(int* ptr)
{
    for(int i=0;i<4;i++)
    {
    printf("The avlue at %d is %d\n", i, *(ptr+i));
    }
    //If we change any value hear it gets reflected in main
    *(ptr+2)=65545;
}

*/
void func3(int array[2][4])
{
   for(int i=0;i<2;i++)
   {
       for(int j=0;j<4;j++)
       {
            printf("value at %d , %d is %d\n",i,j,array[i][j]);
       }
   }
}


int main(){

// int arr[]={23,13,3,4};
int arr[][4]={{3,3,53,64},{23,13,3,4}};
/*
    printf("The avlue at 0 is %d\n",arr[0]);
    //Declaring array as a parameter
    func1(arr); 
    printf("The avlue at 0 is %d\n",arr[0]);
*/

    //Declaring array's base address as a parameter
    // func2(arr);
    // func2(arr);

    //Passing 2-d array
    func3(arr);
return 0;
}
