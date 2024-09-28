// Dynamic memory by pointer

#include<stdio.h>
#include<stdlib.h>

void main(){
    int *alpha, *beta;
    alpha=malloc(sizeof(int));// dy m/y
    *alpha=89;
    //*beta=90;// static pointer
    printf("\ndynamic %d",*alpha);
    //printf("\nstatic %d ",*beta);
    free(alpha);
    printf("\ndynamic %d",*alpha);
}