// array demostration

#include<stdio.h>


// read and call by reference
void readAll(float myStock[]){
    int index=0;
    printf("\nReading the grocery stocks\n");
    myStock[2]*=2;
    do{
        printf("\n%.1f %d",myStock[index],&myStock[index]);
        index++;
    }while(index<10);
}

void main(){
    float grocery[10]={7.8,9.2,56.9,1.2,97.6,6.90,43.8,67.9,23.9,65.3};
    printf("\n%d",grocery);//printf("\n%d",&grocery[0]);
    readAll(grocery);
    printf("\n%.1f",grocery[2]);
}