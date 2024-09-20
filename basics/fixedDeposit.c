// Fixed Deposit calculator

#include<stdio.h>

void main(){
    int principleAmount=0, duration=0;
    float rateOfInterest=6.5, totalInterest=0, maturityAmount=0;
    printf("\nWelcome to ABC Bank tell us your principle amount and duration");
    // input
    scanf("%d%d",&principleAmount,&duration);
    // interest amount for one year
    totalInterest=principleAmount*rateOfInterest/100;
    // multiple one year with duration
    totalInterest*=duration;
    // deduct 7% TDS
    totalInterest-=(totalInterest*7)/100;
    // add principle with total for maturity
    maturityAmount=principleAmount+totalInterest;

    printf("\n%d of FD earned %.2f for the year of %d with ROI %.2f",
    principleAmount,maturityAmount,duration,rateOfInterest);

}