#include<stdio.h>
#include<string.h>
struct det
{
     char name[50];
     char dr_no[15];
     char route[15];
     int kms;

};
int main(){
    
     struct det d1,d2,d3;
    
     printf("Enter your name:- \n");
     scanf("%s",&d1.name);
     printf("Enter your driving licence number:- \n"); 
     scanf("%s",&d1.dr_no);
     printf("Enter your route:- \n"); 
     scanf("%s",&d1.route);
     printf("Please tell me how many KMs you travells:- \n"); 
     scanf("%d",&d1.kms);
    
    
     printf("Enter your name:- \n");
     scanf("%s",&d2.name);
     printf("Enter your driving licence number:- \n"); 
     scanf("%s",&d2.dr_no);
     printf("Enter your route:- \n"); 
     scanf("%s",&d2.route);
     printf("Please tell me how many KMs you travells:- \n"); 
     scanf("%d",&d2.kms);
    
    
     printf("Enter your name:- \n");
     scanf("%s",&d3.name);
     printf("Enter your driving licence number:- \n"); 
     scanf("%s",&d3.dr_no);
     printf("Enter your route:- \n"); 
     scanf("%s",&d3.route);
     printf("Please tell me how many KMs you travells:- \n"); 
     scanf("%d",&d3.kms);
    
  
    printf("The name of first driver is :-%s\n",d1.name); 
    printf("The driving licence number of first driver is :-%s\n",d1.dr_no); 
    printf("The routr of first driver is :-%s\n",d1.route); 
    printf("The travelimg killometer of first driver is :-%d\n",d1.kms); 

    printf("The name second driver is :-%s\n",d2.name); 
    printf("The driving licence number of fsecond driver is :-%s\n",d2.dr_no); 
    printf("The routr of fsecond driver is :-%s\n",d2.route); 
    printf("The travelimg killometer of fsecond driver is :-%d\n",d2.kms); 
    
    printf("The name of third driver is :-%s\n",d3.name); 
    printf("The driving licence number of third driver is :-%s\n",d3.dr_no); 
    printf("The routr of third driver is :-%s\n",d3.route); 
    printf("The travelimg killometer of third driver is :-%d\n",d3.kms); 

return 0;
}
