// clearance sale for 5 days

#include<stdio.h>

void main(){
    float ac=23800.56, billed=0.0;int purchased=0;
    int days;
    for(days=1;days<=5;days++){
        printf("\nWelcome to ABC AC Shop clearance sale\n");
        printf("\ncurrent day %d AC price %.2f\n",days,ac);
        printf("\nEnter the no of ac to purchase ");
        scanf("%d",&purchased);
        billed+=purchased*ac;
        ac+=(ac*0.050);
    }
    printf("\nTotal %.2f billed end of clearance sale",
    billed);

}