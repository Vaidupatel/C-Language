#include<stdio.h>
#include<stdlib.h>
int ispalindrome(int num)
{
     int rev=0;
     int orignal=num;

     while(num!=0)
     {
          rev=(rev*10)+(num%10);
          num=num/10;
     }

     printf("reversed number is %d\n",rev); 
     if (orignal==rev)
     {
     return 1;
     }
     else
     {
     return 0;
     }
}

int main(){
int num;
printf("Enter the number to chack wather the number is palindrome or not\n"); 
scanf("%d",&num);
if(ispalindrome(num))
{
     printf("This number is palindrome\n"); 
}
else
{
     printf("This number is not palindrome\n"); 
}
return 0;
}
