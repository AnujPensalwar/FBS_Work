#include <stdio.h>

int check(int num);
void main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(check(num)==1)
        printf("pallindrome number");
    else    
        printf("not pallindrome number");

}
int check(int num){
    int sum,rev,mod;
  
    rev = num;
    while(num!=0){
        mod = num % 10;
        sum = sum * 10 + mod;
        num = num / 10;
        // printf("%d\n",sum);
    }

    if(sum == rev)
        return 1;
    return 0;
}