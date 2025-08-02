#include <stdio.h>

int strong();
void main(){
    if(strong()==1)
        printf("strong number");
    else
        printf("not strong number");
}
int strong(){
    int num,fact,sum=0,res,mod;
    printf("enter the number:");
    scanf("%d",&num);

    res = num;
    while(num!=0){
        mod = num % 10;
        fact = 1;
        while(mod!=0){
            fact =fact * mod;
            mod--;
        }
        sum = sum + fact;
        num = num / 10;
    }
    if(res == sum)
        return 1;
    return 0;
}