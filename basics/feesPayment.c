// college fees payment

#include<stdio.h>

void main(){
    // initialization
    double accountBalance=20000.56, studentFee=0;
    char rollNo[10]="";
    // prompt
    printf("\nTell us your roll number and amount to pay ");
    gets(rollNo);
    scanf("%lf",&studentFee);

    // deposit arithmetic
    // accountBalance=accountBalance+studentFee;
    accountBalance+=studentFee;// short hand
    // accountBalance=studentFee+accountBalance;

    printf("\n %s Thanks for making fees payment of %lf",rollNo,studentFee);
    printf("\n%lf",accountBalance);
}