// clearance sale 

#include<stdio.h>

void main()
{
    float ac=23800.56,billed=0.0;
    int purchased=0, stock=120;int days;
    for (days=1;days<=5&&stock>0;days++){
        printf("welcome to ABC company");
        printf("\ntell us how many ac's sold today ");
        scanf("%d",&purchased);
        if(purchased<=stock){
            stock-=purchased;// non linear
            billed+=(purchased*ac);
        }
        else{
            printf("\nInvalid purchase");
        }
        ac+=(ac*0.050);
    }

    printf("\nEnd of sale %.1f is billed", billed);
}