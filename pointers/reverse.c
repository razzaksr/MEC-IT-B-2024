// reverse array using pointer

#include<stdio.h>

void main(){
    int arr[]={67,89,43,67,91,87};
    int length = sizeof(arr)/sizeof(arr[0]);
    int *begin, *end;
    begin=arr;end=&arr[length-1];
    // reverse
    for(int repeat=1;repeat<=length/2;repeat++, begin++, end--){
        *begin ^= *end;
        *end ^= *begin;
        *begin ^= *end;
    }
    // traverse
    printf("\n");
    for(int index=0;index<length;index++){
        printf("%d ",arr[index]);
    }
}