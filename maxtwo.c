// find largest two

#include<stdio.h>

void main(){
    int numbers[10]={9,81,34,360,25,999,69,108,90,111};
    int maxOne=numbers[0],maxTwo=numbers[0];
    for(int index=0;index<10;index++){
        if(maxOne<numbers[index]){
            maxTwo=maxOne;
            maxOne=numbers[index];
        }
        else if(maxTwo<numbers[index]&&
        numbers[index]!=maxOne){
            maxTwo=numbers[index];
        }
    }
    printf("\n%d is first largest\n%d is second largest",
    maxOne,maxTwo);
}



