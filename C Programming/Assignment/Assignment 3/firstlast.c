#include<stdio.h>
void main(){
    int num,fdigit,ldigit,sum;
    printf("enter a number");
    scanf("%d",&num);

    ldigit=num%10;
    while(num>=10)
    {
       num=num/10;
    }
    fdigit=num;
    sum=fdigit+ldigit;
    printf("the first digit number is %d\n",fdigit);
    printf("the last digit number is %d\n",ldigit);
    printf("the sum of two numbers %d to %d is",sum);
}