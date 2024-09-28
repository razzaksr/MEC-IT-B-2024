// swap using pointer

#include<stdio.h>

void main(){
    int sql=24, nosql=87, *oracle, *mongo;
    oracle=&sql;mongo=&nosql;
    // printf("\n%d\t%d",sql,nosql);
    printf("\n%d\t%d",*oracle,*mongo);

    // swap by arithmetic
    // *oracle += *mongo;
    // *mongo = *oracle - *mongo;
    // *oracle -= *mongo;

    // swap by bitwise
    *oracle ^= *mongo;
    *mongo ^= *oracle;
    *oracle ^= *mongo;

    // printf("\n%d\t%d",*oracle,*mongo);
    printf("\n%d\t%d",sql,nosql);
}