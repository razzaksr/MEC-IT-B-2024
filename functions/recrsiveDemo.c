// recursive with real time

#include<stdio.h>
#include<string.h>

// India
void find(int count){
    if(count>0){
        char country[20]="";
        printf("\nEnter the country name ");
        gets(country);
        int final=strlen(country)-1;// 4
        char lastOne=country[final];//
        if(lastOne=='a'||lastOne=='e'||lastOne=='i'||lastOne=='o'||lastOne=='u'){
            printf("\n%s holds vowels",country);
        }
        count--;// iter
        find(count);// recursive call
    }
}

void main(){
    find(10);
}