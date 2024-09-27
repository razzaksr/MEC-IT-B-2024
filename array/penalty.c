// find and update in array

#include<stdio.h>
// insertion
void checkBalance(double balances[]){
    for(int index=0;index<20;index++){
        printf("\nEnter your current balance ");
        scanf("%lf",&balances[index]);
    }
}

void statement(double balances[]){
    printf("\nPrint all employees balance\n");
    for(int position=0;position<20;position++){
        if(balances[position]<5000){
            balances[position]-=50;
            printf("\n50rs deducted");
        }
        printf("\n%.2lf",balances[position]);
    }
}

void main(){
    double employees[20];
    checkBalance(employees);
    statement(employees);
}