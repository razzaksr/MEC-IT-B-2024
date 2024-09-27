// pointer demo

#include<stdio.h>

void main(){
    double meta=12.5, *insta, **fb;
    printf("\nValue of META %.1lf",meta);
    printf("\nAddress of META %d",&meta);
    insta=&meta;
    printf("\nValue of Insta %d",insta);
    printf("\nAddress of Insta %d",&insta);
    printf("\nInsta pointed data %.1lf",*insta);
    fb=&insta;
    printf("\nValue of Fb %d",fb);
    printf("\nFB pointed data %d",*fb);
    printf("\nFB dual pointed data %.1lf",**fb);
}