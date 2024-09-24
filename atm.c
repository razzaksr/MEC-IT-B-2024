#include "corebank.h"
#include<conio.h>
// #include<corebank.h>
void main(){
    int userWish=0;char authorized='\0', option='\0';
    //printf("\nCurrent Balance is %.2lf",availableBalance);
    authorized=isAuthenticated();// var=getchar();
    if(authorized=='Y'){
        printf("\nTell us what to do \n.W.withdraw\nE.Enquiry");
        option=getch();
        switch (option)
        {
        case 'W':case 'w':
            printf("\nEnter the amount to withdraw ");
            scanf("%d",&userWish);
            withdraw(userWish);
            // withdraw();
            break;
        case 'e':case 'E':balanceEnquiry();// calling
        break;
        default:
            printf("\nInvalid action");
        }
    }
    else{
        printf("\nForbidden access");
    }
}

