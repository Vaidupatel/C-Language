/*-->An array is an collection of same data iteams
-->Iteams are stored at contiguous memory location
-->It can also store collection of derived data types, such as pointers,structures etc.
-->A one dimensional array is like list.
-->A two dimensional array is like a table.
-->The c language place no limits on number of dimensiona on array.
-->Some text refers to one-dimensional array as vectors, two-dimensional array as matrices, and use general tearm arrays when the nummber of dimension is unspecifes or umimportant.
-->Code that use array is more organized and redable.
-->It use to represent multiple data iteams of same type by using only single name.
-->Accsessing an iteams in a given array is very fast!
-->2 Dimensional array makes it is in mathametical appicaton  as it used to represent matrix.
-->Data in an array is stored in contigguous memory locaton.
-->Each element of an array is same of size.
-->Any element of an array with given index can be accessed very quickly by using its address wich can be calculated using the base address and the index.
SYNTEX OF ARRAY
--> Data_type name [size];
--> Data_type name [size]={x,y,x...}; //siz not requrid in this case!
-->Datatype name[rows][coloumn]; // for 2-D array
--> We can also initilize the array one by one  accessing it using its index,
     name[0]=0;
*/

#include<stdio.h>
int main(){
// int marks[4];
// int i;
// for(i=0;i<4;i++)
// {
//      printf("Enter the value of %d element of an array\n",i);
//      scanf("%d",&marks[i]);
// }
// for(i=0;i<4;i++)
// {
//      printf("The value of %d element of an array is %d\n",i,marks[i]);
// }


int marks[][4]={{2,4,6,8},{1,3,5,7}};
int i,j;
for(i=0;i<2;i++)
{
for(j=0;j<4;j++)
{
     // printf("The value of %d,%d element of an array is %d\n",i,j,marks[i][j]);
     printf("%d ",marks[i][j]);
}
printf("\n");
}
return 0;
}
