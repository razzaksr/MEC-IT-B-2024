//find students who have data analytics
#include<stdio.h>
#include<string.h>
void main(){
    char studentInput[20]="";
    int recruited=0,studentCount=0;
    for(studentCount=1;studentCount<=50;studentCount++){
        printf("Enter Your skill:");
        gets(studentInput);
        strlwr(studentInput);// to lower case
        if(strcmp(studentInput,"data analytics")==0){
            recruited++;
        }    
    }
    printf("%d students are have Data Analytics skill.",
    recruited);
}