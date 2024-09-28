// reallocate memory using pointer

#include<stdio.h>
#include<stdlib.h>

void main(){
    int *week, *new;
    week=calloc(sizeof(int),5);
    *(week+0)=12;*(week+1)=9;*(week+2)=87;
    *(week+3)=18;*(week+4)=76;
    new=(int *)realloc(week,4);
    week+=4;
    // free(week);
    // week++;
    free(week);
    week=new;
    printf("\n");
    for(int index=1;index<=5;index++){
        printf("%d ",*week);
        week++;
    }
}