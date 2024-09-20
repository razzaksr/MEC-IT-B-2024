// operator precedence

#include<stdio.h>

void main(){
    int maxi=12, mini=15;
    // printf("\n%d",((maxi++)*(mini+=2)-(mini-maxi)));// 200
    // printf("\n%d",((++maxi)*(mini+=2)-(mini-maxi)));// 217
    // printf("\n%d",((maxi++)+(mini+=2)/(mini-maxi)));// 12+17/4>>16
    // printf("\n%d",((++maxi)+(mini+=2)/(mini-maxi)));// 13+17/4>>17
    // printf("\n%d",((maxi++)+(mini+=2)/(maxi/=2)));// 13+17/6>> 15
    printf("\n%d",((maxi*=2)-(--mini)/(mini+=5)));// 
}