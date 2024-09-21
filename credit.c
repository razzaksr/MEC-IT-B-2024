// find number of credits

#include<stdio.h>

void main(){
    int transactionCount=1, availableBalance=1200,transactionAmount=0, noOfCredits=0;
    for(;transactionCount<=10;transactionCount++){
        printf("\nEnter the transaction amount ");
        scanf("%d",&transactionAmount);
        if(transactionAmount>=availableBalance){
            noOfCredits++;
        }
        availableBalance=transactionAmount;
    }
    printf("\nNumber of credits are %d",noOfCredits);
}