#include <stdio.h>

int fact();
void main(){
    // int x = fact();
    // printf("factorial is %d",x);
    printf("factorial is %d",fact());
}
int fact(){
    int num,fact=1;
     printf("enter the number:");
     scanf("%d",&num);

     while(num!=0){
        fact = fact * num;
        num--;
     }
     return fact;
}