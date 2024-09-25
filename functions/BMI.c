//calling the function

#include "health.h"

void main(){
    // BMI(165,65);
    float userHeight=0,userWeight=0, calories=0;
    int age;char gender;
    // printf("\nEnter the height and weight ");
    // scanf("%f%f",&userHeight,&userWeight);
    // BMI(userHeight,userWeight);
    printf("\nenter gender, height, weight, age");
    scanf("%c%f%f%d",&gender,&userHeight,&userWeight,&age);
    calories=bmr(userHeight,userWeight,age,gender);
    printf("\nCalorie intake %.2f / day",calories);
}