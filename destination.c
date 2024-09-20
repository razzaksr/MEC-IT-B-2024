// bus booking via string if

#include<stdio.h>
#include<string.h>

void main(){
    char destination[20]="";int price=0;

    printf("\nWelcome to ABC Transport booking\nenter the place to board ");
    gets(destination);

    if(strcmp(destination,"madurai")==0){
        printf("\nMadurai coach starts @13.50");
    }
    else if(strcmp(destination,"kovai")==0){
        printf("\nCovai coach starts @ 4.00");
    }
    else if(strcmp(destination,"bengaluru")==0){
        printf("\nEnter the amount to select class ");
        scanf("%d",&price);
        if(price==200){
            printf("\nYou can board to bengaluru in seater");
        }
        else if(price==500){
            printf("\nYou can board to bengaluru in AC");
        }
        else if(price==700){
            printf("\nYou can board to bengaluru in sleeper");
        }
        else{
            printf("\nInvalid amount");
        }
    }
    else if(strcmp(destination,"chennai")==0){
        printf("\nChennai coach starts @ 18.00");
    }
    else{
        printf("\nInvalid destination");
    }
}