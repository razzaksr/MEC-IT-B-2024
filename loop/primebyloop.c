// find whether given number is prime or not using loop

#include<stdio.h>

void main(){
    int userGiven=0, isPrime=1;
    printf("\nEnter the number to determine prime or not");
    scanf("%d",&userGiven);

    for(int perform=2;perform<userGiven;perform++){
        if(userGiven%perform==0){
            isPrime=0;
            break;
        }
    }
    (isPrime)?printf("\n%d is prime",userGiven):
    printf("\n%d is not prime",userGiven);
}