// bitwise operator: & | >> << ^
// int, char
#include<stdio.h>

void main(){
    int maxi=12; char mini='R';
    printf("%d",mini);
    printf("%d",(maxi&50));
    printf("\n%d",(mini|maxi));
    printf("\n%d",(mini^120));
    printf("\n%d\t%d",maxi,mini);
    maxi^=mini;mini^=maxi;maxi^=mini;
    printf("\n%d\t%d",maxi,mini);

    // shift operator
    printf("\n%d",mini>>4);
    printf("\n%d",maxi<<3);

    // encryption
    int ogData=0, secret=0, encrypted=0;
    printf("\n------------sender end---------\nEnter the OG Data, secret key ");
    scanf("%d%d",&ogData,&secret);
    encrypted=ogData<<secret;
    printf("\n%d",encrypted);
    printf("\n-------------receiver end ----- ");
    //decrypt
    encrypted>>=secret;
    printf("\nDecrypted data %d",encrypted);
}