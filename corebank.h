#include<stdio.h>

int cardPin=7766;
double availableBalance=2456.9;

char isAuthenticated(){
    int userPin=0;
    printf("\nEnter the pin to authenticate ");
    scanf("%d",&userPin);
    if(userPin==cardPin){
        return 'Y';
    }
    return 'N';
}

void withdraw(int required){
    if(required<=availableBalance){
        availableBalance-=required;
        printf("withdraw success");
    }
    else{
        printf("withdraw failed due to insufficient balance");
    }
}

void balanceEnquiry(){
    printf("\nMy account balance %.2lf",availableBalance);
}
