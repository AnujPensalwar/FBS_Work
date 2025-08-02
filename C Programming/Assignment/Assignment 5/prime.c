#include <stdio.h>

int prime(int num);
void main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(prime(num)==0)
        printf("prime number");
    else
        printf("not prime");
}
int prime(int num){
    int i=2,flag=0;

    while(i<num){
        if(num%i ==0){
            flag = 1;
            break;
        }
        i++;
    }
    return flag;
}