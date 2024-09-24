//floyds left lower
#include<stdio.h>

void main(){
    int row=0,column=0,space=0,userWish=0;
    printf("\nEnter the no of row");
    scanf("%d",&userWish);

    // right lower floyd
    for(row=userWish;row>=1;row--)
    {
        for(space=userWish;space>row;space--){
            printf(" ");
        }
        for(column=1;column<=row;column++){
             printf("&");
         }
         printf("\n");
    }


    // left lower flyod
    // for(row=userWish;row>=1;row--){
    //     for(column=1;column<=row;column++){
    //         printf("&");
    //     }
    //     printf("\n");
    // }
}