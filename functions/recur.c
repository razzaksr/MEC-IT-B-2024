// recursive demo

#include<stdio.h>

void fairPlay(){
    printf("\nFair play refers sportsmanship");
    fairPlay();
}

void tables(int startTable, int endTable){
    if(startTable<=endTable){// cond
        printf("\nMultiplication table of %d\n",startTable);
        for(int number=1;number<=10;number++){
            printf("\n%d X %d = %d",number,startTable,(number*startTable));
        }
        startTable++;// iter
        tables(startTable,endTable);// recursive call
    }
}

void main(){
    // fairPlay();
    tables(2,4);// init
}