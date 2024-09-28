// identify the common values between array

#include<stdio.h>

void find(int *origin,int length1, int *remote, int length2){
    int temp[100]={0};
    for(int select=1;select<=length1;select++, origin++){
        for(int comp=1;comp<=length2;comp++,remote++){
            if(*origin == *remote){
                temp[*origin]++;
            }
        }
        remote=remote-length2;
    }
    printf("\nDisplaying Common values\n");
    for(int index=0;index<100;index++){
        if(temp[index]>0)
            printf("%d ",index);
    }
}

void main(){
    int alpha[]={98,23,45,64,65,88};
    int beta[]={65,38,59,56,98,23,98};
    find(alpha,6,beta,7);
}