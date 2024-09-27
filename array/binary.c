// binary search 

#include<stdio.h>
#include<string.h>

int search(char arr[11][50],int start, int end, char use[])
{
    if(start<=end){
        int mid=start+(end-start)/2;
        if(strcmp(arr[mid],use)==0)
            return mid;
        else if(strcmp(arr[mid],use)>0)
            return search(arr,start,mid-1,use);
        else
            return search(arr,mid+1,end,use);
    }
    return -1;
}

void main(){
    // storage
    char asia[11][50]={"Bangladesh",
    "China","India","Japan","Mangolia","Nepal",
    "Pakistan","Russia","Singapore","Srilanka"};
    // what needs to searched
    char users[50]="";int result=0;
    printf("\nTell us country name to find in asia ");
    gets(users);
    result=search(asia,0,9,users);
    printf("\n%s resides @ %d",users,result);
}