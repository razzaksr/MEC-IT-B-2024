// fibonacci series: 0 1 1 2 3 5 8 13 21 34 ....
//                       a b

#include<stdio.h>

void series(int users){
    int numberOne=0, numberTwo=1, sum=0;
    if(users>=2){
        printf("\n%d %d",numberOne,numberTwo);
        users-=2;// 5-2>> 3
        while(users>0){
            sum=numberOne+numberTwo;
            printf(" %d",sum);
            numberOne=numberTwo;
            numberTwo=sum;
            users--;
        }
    }
    else{
        printf("\nCan't generate the fibonacci series ");
    }
}
void main(){
    int userLimit=0;
    printf("\nTell us the limit of fibonacci series ");
    scanf("%d",&userLimit);// 5
    series(userLimit);
}