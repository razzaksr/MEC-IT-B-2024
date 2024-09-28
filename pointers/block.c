// pointers in functions

#include<stdio.h>

void deposit(double current){
    current+=100;
}

// call by reference/ address
// pointer can be used as parameter of function
void credit(double *current){
    int challan=0;
    printf("\nLet us know amount to be depoisted ");
    scanf("%d",&challan);
    *current += challan;
    printf("\n%d has successfully deposited", challan);
}

void main(){
    double accountBalance=988.4;
    // deposit(accountBalance);// call by value
    credit(&accountBalance);
    printf("\n%.1lf",accountBalance);
}