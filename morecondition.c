// loop based on multiple condition

#include<stdio.h>

void main(){
    int totalSeats=0, selectedSeat=0;
    double boardTime=0.0, departureTime=0.0;
    // interaction between time keeper and transaport
    printf("\nlet us know the start time of the bus ");
    scanf("%lf",&boardTime);// 12.10>> 12.20
    printf("\nlet us know how many seats available ");
    scanf("%d",&totalSeats);
    departureTime=boardTime+0.10;
    // transport with passenger
    while(totalSeats>0&&boardTime<=departureTime){
        printf("\nhow many seats required ");
        scanf("%d",&selectedSeat);
        if(selectedSeat<=totalSeats){
            printf("\n%d seat's are booked",selectedSeat);
            totalSeats-=selectedSeat;// non linear
        }
        else{
            printf("\n%d not available",selectedSeat);
        }
        boardTime+=0.01;// linear
    }
}