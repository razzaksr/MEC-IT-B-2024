// perfect square pattern

#include<stdio.h>

void main(){
    int row=0,column=0, userWish=0;
    printf("\nEnter the no of rows ");
    scanf("%d",&userWish);
    for(row=1;row<=userWish;row++){
        for(column=1;column<=userWish;column++){
            printf("&");
        }
        printf("\n");
    }
}