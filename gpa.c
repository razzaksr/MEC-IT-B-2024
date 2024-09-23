// find the number of student who got gpa 8.5 or greater

#include<stdio.h>

void main(){
    int student = 21, count = 0; float gpa=0;

    while(student<=60){
        printf("\nTell us your GPA ");
        scanf("%f",&gpa);
        if(gpa>=8.5){
            count++;
        }
        student++;
    }

    printf("\n%d is no of student got 8.5 or greater",
    count);

}