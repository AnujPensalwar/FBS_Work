#include <stdio.h>

int prime();
void main(){
    if(prime()==0)
        printf("prime number");
    else
        printf("not prime");
}
int prime(){
    int num,i=2,flag=0;
    printf("Enter the number:");
    scanf("%d",&num);
    while(i<num){
        if(num%i ==0){
            flag = 1;
            break;
        }
        i++;
    }
    return flag;
}