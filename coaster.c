// roller coaster alternate row

#include<stdio.h>
#include<string.h>

void main(){
    int row=0, seat=0;char chart[50]="\n";
    for(row=1;row<=10;row++){
        if(row%2!=0){
            for(seat=1;seat<=2;seat++){
                strcat(chart,"$ ");
            }
        }
        else{
            strcat(chart,"- -");
        }
        strcat(chart,"\n");
    }
    printf("\nPeople occupied %s",chart);
}