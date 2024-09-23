//ration card check 
#include <stdio.h>
#include<string.h>
void main(){
  char cardType[10]=""; int wheat;
  for(wheat=1;wheat<=49;){
    printf("\nTell us card type ");
    gets(cardType);
    if(strcmp(cardType,"rice")==0){
        printf("\nYour 1kg wheat has distributed");
        wheat++;
    }
    else{
        printf("\n%s has not opted for wheat",cardType);
    }
  }
}


