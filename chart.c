// theatre chart of booking

#include<stdio.h>
#include<string.h>

void main(){
    int pay=0, row=0, seat=0;char chart[70]="\n";

    for(row=1;row<=5;row++){
        for(seat=1;seat<=10;seat++){
            printf("\nPay for the ticket ");
            scanf("%d",&pay);
            if(pay>=200){
                printf("\nYou have booked ");
                strcat(chart,"$");
            }
            else{
                printf("\nYou haven't booked");
                strcat(chart,"-");
            }
            if(seat==3||seat==7){
                strcat(chart," ");
            }
        }
        strcat(chart,"\n");
    }

    printf("\nShow chart %s",chart);
}