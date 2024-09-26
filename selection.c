// selection sort

#include<stdio.h>

void read(double arr[]){
    printf("\nAnnual salary of employees\n");
    for(int index=0;index<5;index++){
        printf("%.2lf ",arr[index]);
    }
}

void sort(double arr[]){
    for(int select=0;select<5;select++){
        for(int comp=select+1;comp<5;comp++){
            // swap
            if(arr[select]>arr[comp]){
                arr[select]*=arr[comp];
                arr[comp]=arr[select]/arr[comp];
                arr[select]/=arr[comp];
            }
        }
    }
}

void main(){
    double salary[5]={64.2,47.2,95.1,88.5,67.9};
    read(salary);
    sort(salary);
    read(salary);
}