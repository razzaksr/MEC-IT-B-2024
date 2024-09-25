// find even numbers using recursive function

#include<stdio.h>

void even(int startNumber,int endNumber){
    if(startNumber<=endNumber){
        if((startNumber%2)==0){
            printf("\n%d is even Number.",startNumber);
        }
        // else{
        //     printf("%d is odd Number.",startNumber);
        // }
        startNumber++;
        even(startNumber,endNumber);
    }
}

void main(){
    int start=0,end=0;
    printf("Enter a range of even Number: ");
    scanf("%d %d",&start,&end);
    even(start,end);
}