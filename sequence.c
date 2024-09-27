// Pointers in array

#include<stdio.h>

void main(){
    int mileage[10]={60,40,55,20,45,25,78,35,21,50};
    int *guide;
    guide=mileage;// guide=&mileage[0];
    
    // unlike early index loop implementation this one refers no of iteration not with array
    for(int iteration=111;iteration<=120;iteration++,guide++){
        printf("%d ",*guide);
    }
}