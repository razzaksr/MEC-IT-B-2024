// swap by operators

#include<stdio.h>

void main(){
    // implicit conversion
    int gamma=97; char delta='z', assist=0;
    printf("\nValue of Gamma %d and value of delta %d",gamma,delta);

    // swap by third variable
    // assist=gamma;gamma=delta;delta=assist;

    // swap by arithmetic
    gamma*=delta;// gamma=gamma+delta// 219
    delta=gamma/delta;// 97
    gamma/=delta;// 122

    printf("\nValue of Gamma %d and value of delta %d",gamma,delta);
}