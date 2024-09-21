// if varients: ladder>> IVR for bank products
// menu1>> savings, currunt, credit, deposit, loans, funds
// menu2>> fixed, recursive
#include<stdio.h>
#include<string.h>// strcmp(str1,str2)>> str1 chars, str2 chars>> 0,positive, negative

void main(){
    int menu1=0; char menu2[20]="";
    printf("\nThanks for calling ABC\n");
    printf("\nEnter the number \n1. Savings\n2. Current\n3. Creditcard\n4. Deposits\n5. Loans\n6. Funds");
    scanf("%d",&menu1);
    if(menu1==1){
        printf("\nABC offers 6-8 interest for savings account");
    }
    else if(menu1==2){
        printf("\nABC enable to maintain 5000 for minumum balance in current account");
    }
    else if(menu1==3){
        printf("\nABC offers Rupay and VISA credit cards");
    }
    else if(menu1==4){
        printf("\nABC offers deposits from 8 11 percentage interest");
        printf("\nEnter the deposit type to know more");
        scanf("%s",menu2);
        if(strcmp(menu2,"fixed")==0){
            printf("\nFD available minimum of 2 years and lumpsum amount 100000 with ROI 8");
        }
        else if(strcmp(menu2,"recursive")==0){
            printf("\nRD monthly investment with ROI 8.5 for the duration minimum 3 years");
        }
        else{
            printf("\nInvalid Deposit type");
        }
    }
    else if(menu1==5){
        printf("\nABC offers 8 to 28 ROI loans");
    }
    else if(menu1==6){
        printf("\nABC has captivated mutual funds for wealth");
    }
    else{
        printf("\nInvalid options");
    }
}