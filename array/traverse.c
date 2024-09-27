// crud operations in array: insertion
// collection the BMI

#include<stdio.h>
void checkStatus(float[]);// fucntion declaration

void main(){
    float employees[10];// 
    float height=0, weight=0, currentBmi=0;
    // insertion employees bmi into array
    for(int position=0;position<10;position++){
        printf("\nTell us your height and weight ");
        scanf("%f%f",&height,&weight);
        height/=100;// cm to m
        currentBmi=weight/(height*height);
        employees[position]=currentBmi;
    }

    checkStatus(employees);

    // read all employees bmi
    // for(int place=0;place<=10;place++){
    //     printf("\n%.1f",employees[place]);
    // }
}

void checkStatus(float bodyMass[]){
    int index=0, countUnderWeight=0, countObese=0;
    while(index<10){
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
