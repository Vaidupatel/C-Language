/*
After multiplication of two matrix effective eqation of matrx multiplicaton is: 
Cij=Ai0.Boj+Ai1.B1j+……+Ain.Bnj
Cij=∑Aik.Bkj
     k=0 to N-1

*/
#include<stdio.h>
int main(){
     int r1,r2,c1,c2,n=2;
     int a[2][2];
     int b[2][2];
     int c[2][2];
printf("Enter the number of row in 1st metrix\n"); 
scanf("%d",&r1);
printf("Enter the number of column in 1st metrix\n"); 
scanf("%d",&c1);

printf("Enter the number of row in 2nd metrix\n"); 
scanf("%d",&r2);
printf("Enter the number of column in 2nd metrix\n"); 
scanf("%d",&c2);

if(c1!=r1)
{
     printf("This metrix are can't be multiplied because of different size\n"); 
}
else
{
     printf("Enter the value of Matrix 1\n"); 
    for(int i=0;i<2;i++)
    {
         for(int j=0;j<2;j++)
         {
          printf("Enter the r%d,c%d\n",i+1,j+1);
          scanf("%d",&a[i][j]); 
         }
    }
     printf("Enter the value of Matrix 2\n"); 
    for(int i=0;i<2;i++)
    {
         for(int j=0;j<2;j++)
         {
          printf("Enter the r%d,c%d\n",i+1,j+1);
          scanf("%d",&b[i][j]); 
         }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = 0;
            for (int k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for(int i=0;i<2;i++)
    {
         for(int j=0;j<2;j++)
         {
          printf("r%d,c%d is %d\n",i+1,j+1,c[i][j]);
         }
    }
    
    
}



return 0;
}
