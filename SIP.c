/* 
Systematic Investement Plan:
amount, duration in years>> duration*12>> 10>> 120
ROI>> monthly interest
*/

#include<stdio.h>

void main(){
    int monthlyInvestment=0, duration=0, durationInMonths=0;
    double roi=12.0, monthlyInterest=0, maturity=0;

    printf("\n-----------------ABC SIP Calculator----------------\n");
    printf("\nEnter the amount ot invest monthly ");
    scanf("%d",&monthlyInvestment);
    printf("\nEnter the duration to invest ");
    scanf("%d",&duration);

    // duration in months
    durationInMonths=duration*12;
    // roi in months
    monthlyInterest=roi/12/100;

    // calculate monthly and find maturity
    while(durationInMonths>0){
        maturity=(maturity+monthlyInvestment)*(1+monthlyInterest);
        // printf("\n%.2lf",maturity);
        durationInMonths--;
    }
    printf("\n%d is invested by user ",(monthlyInvestment*duration*12));
    printf("\nREturn %.2lf",maturity);
}