#include<stdio.h>
void main(){
    int no,r1,r2,r3,q1,rev;
    printf("enter a three digit number:\n");
    scanf("%d",&no);
    
    r1=no%10;
    q1=no/10;
    r2=q1%10;
    r3=q1/10;

    rev=r1*100+r2*10+r3;

    if(no==rev){
        printf("number is palindrome:\n");
    }
    else{
        printf("number is not palindrome");
    }
    
}