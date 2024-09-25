// local variables scope

#include<stdio.h>

void vijay(){
    int alpha;
    printf("\n%d",alpha);// 
}

void main(){
    int alpha;// local to main
    alpha=12;
    // cosmo local to for loop
    for(double cosmo=12.45;cosmo<=12.50;cosmo+=0.01){
        printf("\nTimer %.2lf",cosmo);
    }
    // printf("\n%d\t%.2lf",alpha,cosmo);
    printf("\n%d",alpha);

}