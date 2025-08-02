#include <stdio.h>

int fact(int num);
void main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    printf("factorial is %d",fact(num));
}
int fact(int num){
    int fact =1;
    while(num!=0){
        fact = fact * num;
        num--;
    }
    return fact;
}