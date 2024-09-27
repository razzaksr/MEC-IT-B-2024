// Search on multi diomensional

#include<stdio.h>

// void selection(int *arr){
//     for(int select=0;select<4;select++){
//         for(int comp=select+1;comp<4;comp++){
//             if(arr[select]<arr[comp]){
//                 arr[select]^=arr[comp];
//                 arr[comp]^=arr[select];
//                 arr[select]^=arr[comp];
//             }
//         }
//     }
// }


void traverse(int arr[2][4]){
    for(int select=0;select<2;select++){
        for(int comp=0;comp<4;comp++){
            printf("%d ",arr[select][comp]);
        }
        printf("\n");
    }
}
void selection(int *arr){
    int *next;
    for(int select=11;select<=14;select++){
        next=arr+1;
        for(int comp=select+1;comp<=14;comp++,next++){
            if(*arr < *next){
                *arr ^= *next;
                *next ^= *arr;
                *arr^= *next;
            }
        }
    }
}

int binary(int *arr,int start, int end, int users){
    if(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==users)
            return mid;
        else if(arr[mid]>users)
            return binary(arr,mid+1,end,users);
        else
            return binary(arr,start,mid-1,users);
    }
    return -1;
}

void main(){
    int tarrif[2][4]={
        {599,650,800,399},
        {999,1299,399,622}
    };
    int position=0;
    //traverse(tarrif);
    selection(tarrif[1]);// &tarrif[0]
    //traverse(tarrif);
    position=binary(tarrif[1],0,4,1299);
    printf("\n%d @ %d",1299,position);
}