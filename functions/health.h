//To calculate the BMI and BMR

#include<stdio.h>

float bmr(float height,float weight, int age, char gender){
    float userBmr=0;
    userBmr=10*weight + 6.25*height - 5*age;
    if(gender=='m'||gender=='M'){
        userBmr+=5;
    }
    else if(gender=='f'||gender=='F'){
        userBmr-=161;
    }
    else{
        userBmr=0;
    }
    return userBmr;
}


void BMI(float Height,float Weight){
    float BMI=0;
    Height/=100;
    BMI=Weight/(Height*Height);
    if(BMI<=18.4){
        printf("Underweight");
    }
    else if (18.5<BMI&&BMI<24.9)
    {
       printf("Normal");
    }
    else if(25.0<BMI&&BMI<39.9)
    {
        printf("Overweight");
    }
    else if(BMI>=40.0){
        printf("Obesity");
    }
    else{
        printf("You've given invalid weight and height");
    }
}