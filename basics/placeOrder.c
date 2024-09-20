// flipkart order placement

#include<stdio.h>

void main(){
    char name[20]="", productName[20]="", address[50]="", purchaseMode[20]="";
    float amount=0;long long contact=0;
    printf("\n---------Place your order by name, product, address, purchase mode, price, contact");
    gets(name);gets(productName);gets(address);gets(purchaseMode);
    scanf("%f%lld",&amount,&contact);
    printf("\n%s your order %s has placed amount of %f successfully",name,productName,amount);
    printf("\nFurther tracking details will be sent to %lld",contact);
}