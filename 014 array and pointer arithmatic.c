// -->POINTER ARITHMATIC<--
// -->Ther are four arithmatic pointer that can be used on pointer
// --> ++
// --> --
// --> +
// --> -

#include<stdio.h>
int main(){

int a=34;
int *ptra=&a;

// it print the address of a
printf("THe adress of a is %d\n",ptra); 

// it print the address of a by incrementing and store the incrimented address of a 
ptra++;
printf("THe adress of a++ is %d\n",ptra);

//it print the address of a by increment its by 1 but hear 1 mean by the one size of integer a
printf("THe adress of a+1 is %d\n",ptra+1);

//it print the address of a by decrement its by 1 but hear 1 mean by the one size of integer a
printf("THe adress of a-1 is %d\n",ptra-1);

// it print the address of a by decrementing and store the decrimented address of a
ptra--;
printf("THe adress of a++ is %d\n",ptra);


// ------------------------->ARRAY AND POINTERS<-------------------------
// If arr is a pointer to arr[0] then arr+i is pointer to arr[i]
int arr[]={1,2,3,4,5,6,7,8,9};
int *ptr=arr;
printf("value at the possition 3 of the array is  %d\n",arr[3]);
//print the address of first element all three are same
printf("The address of first element of the array is %d\n",&arr[0]);
printf("The address of first element of the array is %d\n",ptr);
printf("The address of first element of the array is %d\n",arr);

//print the address of second element both are same
printf("The address of second element of the array is %d\n",&arr[1]);
printf("The address of second element of the array is %d\n",ptr+1);
printf("The address of second element of the array is %d\n",arr+1);

// it print the value of arr[0]
printf("The value at the address of first element of the array is %d\n",arr[0]);
//Print the value at address given by &, with help of * 
printf("The value at the address of first element of the array is %d\n",*ptr);
printf("The value at the address of first element of the array is %d\n",*(&arr[0]));
printf("The value at the address of first element of the array is %d\n",*(arr));
//print the value at address given by &,with help of *
printf("The value at the address of second element of the array is %d\n",*(&arr[1]));
printf("The value at the address of second element of the array is %d\n",*(arr+1));
printf("The value at the address of second element of the array is %d\n",*(ptr+1));

return 0;
}
