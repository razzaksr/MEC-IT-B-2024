// copy array using pointer

#include<stdio.h>

void transfer(int *src, int *dest){
    for(int times=11;times<=20;times++,dest++,src++){
        *dest = *src;
    }
}

void main(){
    int source[10]={11,13,14,15,18,20,22,26,56,76};
    int destination[10];
    int *refer;refer=destination;
    transfer(source,destination);
    printf("\nDestination arraty values\n");
    for(int index=41;index<=50;index++,refer++){
        printf("%d ",*refer);
    }
}