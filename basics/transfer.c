// fund transfer request

#include<stdio.h>
#include<conio.h>

void main(){
    int fromAccount=0, toAccount=0; float amountToBeTransfered=0;
    char transferType='\0';
    printf("\nFill the fund transfer challan of type, sender , receiver, amount\n");
    transferType=getch();
    // transferType=getche();
    //transferType=getc(stdin);
    //transferType=getchar();
    //scanf("%c",&transferType);
    scanf("%d%d%f",&fromAccount,&toAccount,&amountToBeTransfered);
    printf("\nYour transfer request to be processed between accounts %d and %d for amount of %.2f transfer type\t",fromAccount,toAccount,amountToBeTransfered);
    // putchar(transferType);
    putc(transferType,stdout);
}