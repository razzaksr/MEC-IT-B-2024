// demonstration of call by value

#include<stdio.h>

void victor(double value){
    printf("\nReceived data %.2lf",value);
    value*=value;// 8.9*8.9
    printf("\nUpdated data %.2lf",value);
}


void main(){
    double myData=8.9;
    // victor(5.6);// 5.6 argument to value in victor
    victor(myData);
    printf("\nFinal value of myData in main %.2lf",
    myData);// 79.21    8.9
}