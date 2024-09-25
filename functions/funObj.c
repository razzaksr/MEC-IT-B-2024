// objective of the function

#include<stdio.h>
#include<conio.h>

// global variables: scope, changes throughout the program
// int cardPin=7766;
// double availableBalance=2456.9;

// no param and return: 
// char getchar()
// char isAuthenticated(){
//     int userPin=0;
//     printf("\nEnter the pin to authenticate ");
//     scanf("%d",&userPin);
//     if(userPin==cardPin){
//         return 'Y';
//     }
//     return 'N';
// }

// param and no return
// void withdraw(int required){
//     if(required<=availableBalance){
//         availableBalance-=required;
//         printf("withdraw success");
//     }
//     else{
//         printf("withdraw failed due to insufficient balance");
//     }
// }

// void withdraw(){
//     int required=0;
//     printf("\nEnter the amount to withdraw ");
//     scanf("%d",&required);
//     if(required<=availableBalance){
//         availableBalance-=required;
//         printf("withdraw success");
//     }
//     else{
//         printf("withdraw failed due to insufficient balance");
//     }
// }

// no return without param
// definition
// void balanceEnquiry(){
//     printf("\nMy account balance %.2lf",availableBalance);
// }

// void main(){
//     int userWish=0;char authorized='\0', option='\0';
//     //printf("\nCurrent Balance is %.2lf",availableBalance);
//     authorized=isAuthenticated();// var=getchar();
//     if(authorized=='Y'){
//         printf("\nTell us what to do \n.W.withdraw\nE.Enquiry");
//         option=getch();
//         switch (option)
//         {
//         case 'W':case 'w':
//             printf("\nEnter the amount to withdraw ");
//             scanf("%d",&userWish);
//             withdraw(userWish);
//             // withdraw();
//             break;
//         case 'e':case 'E':balanceEnquiry();// calling
//         break;
//         default:
//             printf("\nInvalid action");
//         }
//     }
//     else{
//         printf("\nForbidden access");
//     }
// }

