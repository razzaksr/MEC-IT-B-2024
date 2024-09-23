// demonstrate the differences between for, while and do while

#include<stdio.h>

void main(){
    // init
    int stock=0, userRequired=0, invoice=0;

    // cond
    do{// for(;stock>0;){// while(stock>0){
        printf("\nWelcome to Samsung s23 FE Flash sale\n");
        printf("\nTell us how many mobiles to order ");
        scanf("%d",&userRequired);
        if(userRequired<=stock){
            stock-=userRequired;
            printf("\nThanks for purchasing s23 FE %d order's",userRequired);
            invoice++;
        }
        else{
            printf("\nAvailable Stock %d",stock);
        }
    }while(stock>0);
    printf("\n%d no of invoice's generated",invoice);
}