// switch demo

#include<stdio.h>

void main(){
    int depositableAmount=0;
    printf("\nDepositable amount for FD ");
    scanf("%d",&depositableAmount);
    switch(depositableAmount){
        case 100000:printf("\nROI 7");break;
        case 200000:printf("\nROI 8");break;
        case 300000:printf("\nROI 6.5");break;
        default:printf("\nROI 5");
    }
}