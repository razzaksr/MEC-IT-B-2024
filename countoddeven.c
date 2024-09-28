// count odd and even in array using pointer

#include<stdio.h>
void modify(int *arr){
int odd=0,even=0;
for(int index=0;index<10;index++,arr++){
    if((*arr%2)==0){
        even++;
    }
    else
        odd++;
}
 printf("%d is odd\n%d is even",odd,even);
}
void main()
{
    int number [10]={11,13,14,15,18,20,22,26,56,76};
    modify(number);
}