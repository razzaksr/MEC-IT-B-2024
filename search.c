// Linear search in array: value> index/position

#include<stdio.h>
#include<string.h>

int linearNumber(double arr[],double users){
    for(int index=0;index<5;index++){
        if(arr[index]==users)
            return index;
    }
    return -1;
}

int linear(char countries[11][50],char users[]){
    for(int index=0;index<10;index++){
        if(strcmp(countries[index],users)==0){
            return index;
        }
    }
    return -1;
}

void main(){
    // string: single dimensional char array
    // array of string: multi dimensional char array
    char asia[11][50]={"India","Pakistan","Bangladesh",
    "China","Srilanka","Nepal","Russia","Mangolia",
    "Japan","Singapore"};
    int result=0;
    char userWish[50]="";
    double salary[5]={64.2,47.2,95.1,88.5,67.9};

    // printf("\nEnter the country name to check in ASIA ");
    // gets(userWish);
    // result=linear(asia,userWish);
    // printf("\n%s is available @ %d",userWish,result);

    result=linearNumber(salary,47.2);
    printf("\n%d is where 47.2 is available",result);

}