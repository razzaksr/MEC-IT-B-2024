// find the given number is prime or not

#include<stdio.h>

void main(){
    int userGiven=0;
    printf("\nLet us know the number to determine prime or not");
    scanf("%d",&userGiven);

    if(userGiven==2||userGiven==3||userGiven==5||userGiven==7||
    userGiven%2!=0&&userGiven%3!=0&&userGiven%5!=0&&userGiven%7!=0){
        printf("\nGiven %d is prime",userGiven);
    }
    else{
        printf("\n%d is not prime",userGiven);
    }
}