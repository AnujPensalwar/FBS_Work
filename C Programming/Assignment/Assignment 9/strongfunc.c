#include <stdio.h>

void strong();
void main(){
    strong();
}

void strong(){
    int num,sum = 0,rem,temp;
    printf("enter the number:");
    scanf("%d",&num);
    temp = num;

    while(num>0){
        rem = num % 10;
        // printf("%d",rem);
           int fact = 1;
           for(int i = rem;i>=1;i--){
               fact = fact * i;
           }
           sum = sum + fact;
           num = num / 10;
    }

    if(temp==sum){
        printf("number is strong");
    }
    else{
        printf("number is not strong");
    }
}