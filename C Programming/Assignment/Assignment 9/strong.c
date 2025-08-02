#include <stdio.h>

int isStrong(int num);
int fact(int rem);
void main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    if(isStrong(num)==1)
        printf("Given number is strong");
    else
        printf("Given number is not strong");
}
int isStrong(int num){
    int temp = num;
    int sum = 0;
    while(num>0){
        int rem = num % 10;
        sum = sum + fact(rem);
        num = num / 10;
    }
    if(sum==temp)
        return 1;
    return 0;
}
int fact(int rem){
     int fact = 1;
     for(int i=1;i<=rem;i++){
        fact = fact * i;
     }
     return fact;
}
