// Mobile data consumption

#include<stdio.h>

void main(){
    int days=1;
    float perDayAllocation=0, perDayUtlized=0 , utilized=0, nonUtilized=0, totalAllocated=0;
    printf("\nTell us your per day data ");
    scanf("%f",&perDayAllocation);// 1.5
    totalAllocated=perDayAllocation*30;

    while(days<=30){
        printf("\nTell us how many data utilized of the day %d ",days);
        scanf("%f",&perDayUtlized);
        if(perDayUtlized<=perDayAllocation){
            utilized+=perDayUtlized;
        }
        else{
            printf("\nInvalid data consumption");
        }
        days++;
    }
    nonUtilized=totalAllocated-utilized;
    printf("\nUtilized data %.1f of the %.1f total",
    utilized,totalAllocated);
    printf("\n%.1f non utilized of the total %.1f",
    nonUtilized,totalAllocated);
}