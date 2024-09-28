// block of memory using pointer

#include<stdio.h>
#include<stdlib.h>

void main(){
    double *cardBalance;int limit=5;
    cardBalance=calloc(sizeof(double),limit);
    // insert>> m/y also incremented
    for(int index=1;index<=limit;index++){
        printf("\nEnter the creditCard balance ");
        scanf("%lf",cardBalance);
        cardBalance++;
    }
    cardBalance=cardBalance-limit;// resetting to base 
    for(int index=1;index<=limit;index++){
        printf("\n%lf ",*cardBalance);
        cardBalance++;
    }
    free(cardBalance);// destroy only one m/y out of calloc
}