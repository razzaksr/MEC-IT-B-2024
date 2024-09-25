// find the given number i sprime or not using functions

#include<stdio.h>

int isPrime(int givenNumber){
    for(int divider=2;divider<givenNumber;divider++){
        if(givenNumber%divider==0){
            return 0;
        }
    }
    return 1;
}
void main(){
    int myNumber=0, result=0;
    printf("\nEnter the no to find primae or not ");
    scanf("%d",&myNumber);
    result=isPrime(myNumber);
    printf("\nREsult is %d",result);
}