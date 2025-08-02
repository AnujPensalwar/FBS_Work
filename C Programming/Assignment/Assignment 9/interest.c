#include <stdio.h>

float interest(int,int,int);
void main(){
    int principal,year,rate;
    printf("Enter the principal amount:");
    scanf("%d",&principal);
    printf("Enter the no. of year:");
    scanf("%d",&year);
    printf("Enter the rate of interest:");
    scanf("%d",&rate);
    // interest(principal,year,rate);
    printf("Total amount of simple interest is %.2f",interest(principal,year,rate));
}

float interest(int p,int y,int r){
    float interest,total_amt;
    interest = (p * y * r) / 100.0;
    total_amt = p + interest;
    // printf("Total amount of simple interest is %.2f",total_amt);
    return total_amt;
}