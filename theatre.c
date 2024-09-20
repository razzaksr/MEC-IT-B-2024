// theatre ticket booking

#include<stdio.h>

void main(){
    int availableSeats=24, userRequired=0, costToPay=0;
    double time=0;
    printf("\nWelcome to ABC Multiplex enter timing to book ticket ");
    scanf("%lf",&time);
    // timing check
    if(time==2.45||time==18.30||time==22.10){
        printf("\ntell us how many tickets are required ");
        scanf("%d",&userRequired);
        // seats check
        if(userRequired<=availableSeats){
            printf("\nPay for your %d tickets amount of %d",
            userRequired,(userRequired*200));
            scanf("%d",&costToPay);
            if(costToPay>=(userRequired*200)){
                printf("\nEnjoy your film with ABC cine mall");
            }
            else{
                printf("\nInsufficient amount to watch GOAT");
            }
        }
        else{
            printf("\nInsufficient seats");
        }
    }
    else{
        printf("\nTiming doesn't match");
    }
}