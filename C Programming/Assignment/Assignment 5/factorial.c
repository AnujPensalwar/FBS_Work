#include <stdio.h>

void fact(int num);
void main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    fact(num);
}
void fact(int num){
    int fact =1;
    while(num!=0){
        fact = fact * num;
        num--;
    }
    printf("factorial is %d",fact);
}