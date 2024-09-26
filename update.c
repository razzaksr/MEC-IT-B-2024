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

void change(int mobile[]){
    for(int column=0;column<4;column++){
        mobile[column]+=60;
    }
}

void main(){
    int tarrif[2][4]={
        {599,650,800,399},
        {399,999,699,1299}
    };

    read(tarrif);
    
    change(tarrif[0]);// tarrif 0th row alone

    read(tarrif);

}