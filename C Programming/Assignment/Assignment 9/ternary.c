#include <stdio.h>

void main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);

    (num%3==0)?(num%5==0)?printf("Divisible by both"):printf("Divisible by 3 but not by 5"):(num%5==0)?printf("Divisible by 5 but not by 3"):printf("Divisible by None");
}