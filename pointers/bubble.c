// bubble sort using pointer

#include<stdio.h>

void main(){
    int arr[]={67,89,43,67,91,87};
    int length = sizeof(arr)/sizeof(arr[0]);
    int *begin;
    begin=arr;
    // reverse
    for(int time=1;time<=length-1;time++){
        begin=arr;
        for(int bubble=1;bubble<=length-time-1;bubble++, begin++){
            if(*begin > *(begin+1)){
                *begin ^= *(begin+1);
                *(begin+1) ^= *begin;
                *begin ^= *(begin+1);
            }
        }
    }
    // traverse
    printf("\n");
    for(int index=0;index<length;index++){
        printf("%d ",arr[index]);
    }
}