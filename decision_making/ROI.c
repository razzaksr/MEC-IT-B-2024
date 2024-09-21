// switch draw back

#include<stdio.h>

void main(){
    double roi=0;
    printf("\nEnter the ROI to select loan ");
    scanf("%lf",&roi);

    // should be int/char
    // switch(roi){

    // }

    if(roi>=6.5&&roi<9){
        printf("\nWe can offer Gold loan");
    }
    else if(roi>=9.1&&roi<12.5){
        printf("\nWe can offer Vehicle loan");
    }
    else if(roi>=12.5){
        printf("\nWe can offer Personal loan");
    }
    else{
        printf("\nNo loans matches with your profile");
    }
}