#include<stdio.h>
void main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);

    if(num%3==0 && num%5==0){
        printf("\ndivisible by both");
    }
    else if(num%3==0){
        printf("\ndivisible by 3 but not 5");
    }
    else if(num%5==0){
        printf("\ndivisible by 5 but not 3");
    }
    else{
        printf("\ndivisible by none");
    }
}