#include <stdio.h>

void check();
void main(){
    check();
}

void check(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num%3==0){
        if(num%5==0){
            printf("Divisible by both");
        }
        else{
            printf("Divisible by 3 but not by 5");
        }
    }
    else if(num%5==0){
        printf("Divisible by 5 but not by 3");
    }
    else{
        printf("Divisible by None");
    }
}