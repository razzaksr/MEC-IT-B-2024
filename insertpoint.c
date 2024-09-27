// array insertion using, pointer and functions

#include<stdio.h>

void traverse(float *top){
    printf("\nCurrent Stack Elements are: \n");
    top=top+4;
    for(int iteration=111;iteration<=115;iteration++,top--){
        printf("%.1f @ %d \n",*top,top);
    }
    printf("\n");
}

void push(float *arr,float userIn){
    if(*arr == 0.0){
        printf("\nStack is Underflow\n");
        printf("\n%.1f has pushed @ %d ",userIn,arr);
        *arr = userIn;
    }
    else if(*(arr+4)!=0.0){
        printf("\nPush can't done due to overflow\n");
        return;
    }
    else{
        for(int iteration=111;iteration<=115;iteration++,arr++){
            if(*arr==0.0){
                *arr = userIn;
                printf("\n%.1f has pushed @ %d ",userIn,arr);
                return;
            }
        }
    }
}

void main(){
    // float stack[5]={9.2,4.3,0.6,11.3,7.8};
    float stack[5]={0.0};
    //traverse(stack);// address of 0
    // traverse(&stack[4]);
    push(stack,98.5);
    push(stack,1.3);
    push(stack,5.6);
    push(stack,12.5);
    push(stack,7.12);
    push(stack,0.87);
    traverse(stack);
}