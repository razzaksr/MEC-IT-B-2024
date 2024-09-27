// find tarif position by amount

#include<stdio.h>
// find and update

#include<stdio.h>

void read(int mypacks[2][4]){
    printf("\n------showing JIO packs-------\n");
    for(int row=0;row<2;row++){
        for(int column=0;column<4;column++){
            printf("\n%d",mypacks[row][column]);
        }
    }
}

int select(int mobile[], int userwish){
    for(int column=0;column<4;column++){
        if (mobile[column]==userwish){
            return column;
        }
    }
    return -1;
}

void main(){
    int tarrif[2][4]={
        {599,650,800,399},{399,999,699,1299}
    };
    int userWish=0, position=0;
    printf("\nEnter the amount of package you want to select:");
    scanf("%d",&userWish);
    position=select(tarrif[1],userWish);// tarrif 1th row alone
    printf("The package of %d is available @%d",
    userWish,position);

}
