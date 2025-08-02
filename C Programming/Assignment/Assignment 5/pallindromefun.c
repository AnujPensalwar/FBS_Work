#include <stdio.h>

int check();
void main(){
    if(check()==1)
        printf("pallindrome number");
    else    
        printf("not pallindrome number");
}
int check(){
    int num,sum,rev,mod;
    printf("Enter the number:");
    scanf("%d",&num);

    rev = num;
    while(num!=0){
        mod = num % 10;
        sum = sum * 10 + mod;
        num = num / 10;
        printf("%d\n",sum);
    }

    if(sum == rev)
        return 1;
    return 0;
}