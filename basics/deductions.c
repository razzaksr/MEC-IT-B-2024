// salary deductions: ctc, allowances, deductions, takehome

#include<stdio.h>

void main(){
    double ctc=0, allowanceToBeAdded=0 ,allowances=9.5, deductions=15.0, takeHome=0;
    printf("\nWelcome to MEC Salary calculator\n");
    printf("\nTell us your CTC ");
    scanf("%lf",&ctc);

    // allowance
    takeHome=ctc/12;

    printf("\nMonthly expected %.2lf",takeHome);

    allowanceToBeAdded=(takeHome*allowances)/100;
    takeHome+=allowanceToBeAdded;

    printf("\nallowance %.2lf to be added %.2lf",allowanceToBeAdded,takeHome);

    // takeHome=takeHome-(takeHome*deductions)/100;
    takeHome-=(takeHome*deductions)/100;

    printf("\nafter deductions %.2lf is take home salary",takeHome);
}