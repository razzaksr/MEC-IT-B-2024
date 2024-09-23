// nested loop demo

#include<stdio.h>

void main(){
    int age=0;
    for(int cabin=1;cabin<=5;cabin++){
        for(int seat=1;seat<=4;){
            printf("\nTell us your age ");
            scanf("%d",&age);
            if(age>=18){
                seat++;
                printf("\nWelcome to Hell");
            }
        }
    }
}