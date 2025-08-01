#include<stdio.h>
void main(){
    int num, temp,res,rev=0;
    printf("enter a number:");
    scanf("%d",&num);
    temp=num;
    while(temp>0){
       res=temp%10;
       rev=rev*10+res;
       temp=temp/10;
    }
    printf("reversed number is %d",rev);
    if(num==rev){
        printf("number is paindrome %d",num);
    }
    else{
        printf("number is not palindrome",num);
    }
}