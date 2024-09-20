// fund transfer request using string

#include<stdio.h>

void main(){
    int fromAccount=0, toAccount=0; float amountToBeTransfered=0;
    char transferType[10]="";// string >> 
    printf("\nFill the fund transfer challan of type, sender, receiver, amount\n");
    // printf("\nAddress of string %d",&transferType[1]);
    // scanf("%s",transferType);// space, overflow
    gets(transferType);// overflow
    scanf("%d%d%f",&fromAccount,&toAccount,&amountToBeTransfered);
    // fgets(transferType,sizeof(transferType),stdin);// space
    printf("\nYour transfer request to be processed between accounts %d and %d for amount of %.2f transfer type\t",fromAccount,toAccount,amountToBeTransfered);
    // printf("%s",transferType);
    // puts(transferType);
    // fputs(transferType,stdout);
}