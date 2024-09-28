// find duplicates in array

#include<stdio.h>

void main(){
    int arr[]={67,89,67,91,67,89,91,67}, store[100]={0};
    int count=0, hold=0;
    // to find the length of array
    int length = sizeof(arr)/sizeof(arr[0]);
    // find the duplicates
    for(int index=0;index<length;index++){
        hold=arr[index];
        store[hold]++;
    }
    // count how many are duplicated
    for(int pos=0;pos<100;pos++){
        if(store[pos]>1)
            count++;
    }
    printf("\n%d are total duplicated count",count);
}