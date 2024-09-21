// BMI calculator

#include<stdio.h>

void main()
{
    float Height=0, Weight=0, BMI=0;
    printf("Tell us your height and weight");
    scanf("%f%f",&Height,&Weight);
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