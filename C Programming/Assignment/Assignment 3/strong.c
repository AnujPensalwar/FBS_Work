#include<stdio.h>
void main(){
    int n,temp,rem,sum=0,i,fact;
    n=145;
    temp=n;
    while(n){
        i=1;
        fact=1;
        rem=n%10;
        while(i<=rem){
            fact=fact*i;
            i++;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(sum==temp){
        printf("strong number");
    }
    else{
        printf("not amstrong");
    }
}