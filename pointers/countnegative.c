// count odd and even in array using pointer

#include<stdio.h>
void modify(int *arr){
    int negative=0;
    for(int index=0;index<10;index++,arr++){
        if(*arr<0){
            negative++;
        }
    }
    printf("negative numbers:%d",negative);
}
void main()
{
    int number [10]={-11,13,-14,15,-18,20,-22,26,56,76};
    modify(number);
}