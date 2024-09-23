// floyd pattern

#include<stdio.h>

void main(){
    int row=0, space=0, column=0, userWish=0;
    printf("\nEnter the no of rows ");
    scanf("%d",&userWish);
    for(row=1;row<=userWish;row++){
        for(space=userWish;space>row;space--){
            printf(" ");
        }
        for(column=1;column<=row;column++){
            printf("&");
        }
        printf("\n");
    }
    // left upper floyd
    // for(row=1;row<=userWish;row++){
    //     for(column=1;column<=row;column++){
    //         printf("&");
    //     }
    //     printf("\n");
    // }
}