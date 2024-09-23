// display the factorial of given range
// 5>> 5x4x3x2x1>>120 

#include<stdio.h>

void main(){
    int number=0, copy=0;long long factorial=0;
    for(number=10;number<=15;number++){
        factorial=1;
        copy=number;
        while(copy>0){
            factorial*=copy;
            copy--;
        }
        printf("\n%lld is factorial to %d",factorial,number);
    }
}