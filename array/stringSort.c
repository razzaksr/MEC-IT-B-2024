// Sorting string

#include<stdio.h>
#include<string.h>
void display(char data[11][50]){
    printf("\nDisplaying asia countries\n");
    for(int index=0;index<10;index++){
        printf("%s ",data[index]);
    }
}

void sort(char arr[11][50]){
    char reserve[50]="";
    for(int select=0;select<10;select++){
        for(int comp=select+1;comp<10;comp++){
            if(strcmp(arr[select],arr[comp])>0){
                strcpy(reserve,arr[select]);
                strcpy(arr[select],arr[comp]);
                strcpy(arr[comp],reserve);
            }
        }
    }
}
void main(){
    char asia[11][50]={"India","Pakistan","Bangladesh",
    "China","Srilanka","Nepal","Russia","Mangolia",
    "Japan","Singapore"};
    display(asia);
    sort(asia);
    display(asia);
}