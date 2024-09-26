// find the health status from 10 BMI

#include<stdio.h>

void main(){
    int index=0, countUnderWeight=0, countObese=0;
    // temp storage
    double bodyMass[10]={17.4,10.0,26.3,28.5,30.2,33.5,41.3,45.4,56.7,24.5};
    // to visit arra values by index
    while(index<10){
        // decision making
        if(bodyMass[index]<=18.4){
            printf("\n%.2lf is under Weight",bodyMass[index]);
            countUnderWeight++;
        }
        else if(18.5<bodyMass[index]&&bodyMass[index]<24.9){
            printf("\n%.2lf is Normal",bodyMass[index]);
        }
        else if(25.0<bodyMass[index]&&bodyMass[index]<39.9){
            printf("\n%.2lf is Overweight",bodyMass[index]);
        }
        else
        {
            printf("\n%.2lf is Obesity",bodyMass[index]);
            countObese++;
        }
        index++;
    }
    printf("\n%d people are Obesey", countObese);
    printf("\n%d people are UnderWeight", countUnderWeight);
}