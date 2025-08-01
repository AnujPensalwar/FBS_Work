#include<stdio.h>
void main(){
    int num,fact=1;
    printf("enter a number:");
    scanf("%d",&num);
     int temp=num;
    while(num){
        fact=fact*num;
        num--;
    }
    printf("\n factorial no %d is %d",temp,fact);
}