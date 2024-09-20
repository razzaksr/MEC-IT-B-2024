// sports event registration

#include<stdio.h>

void main(){
    // variable declaration/ initialization
    int mobileNumber=0;double weight=0;float height=0;
    printf("\n----------Welcome to MEC event------------\n");
    printf("\nTell us your details mobile, weight, height ");
    scanf("%d%lf%f",&mobileNumber,&weight,&height);
    printf("\nthanks for registering event further details will be sent to %d",mobileNumber);
}