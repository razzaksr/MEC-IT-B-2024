// if control statement: withdraw process

#include<stdio.h>

void main(){
    double accountBalance=7800.4;int required=0, ogPin=4567, userPin=0;
    printf("\nWelcome to ABC BAnk ATM enter the pin\n");
    scanf("%d",&userPin);
    if(userPin==ogPin){
        // withdraw
        printf("\nLet us know amount with to debit ");
        scanf("%d",&required);
        if(required<=accountBalance){
            accountBalance-=required;
            printf("\nAmount %d has debited and available is %lf",
            required,accountBalance);
        }
        else{
            printf("\nInsufficient balance in account");
        }
    }
    else{
        printf("\nAuthentication failed");
    }
    
}