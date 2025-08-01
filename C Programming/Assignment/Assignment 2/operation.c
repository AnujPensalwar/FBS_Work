#include<stdio.h>
int main(){
    char ch;
    int n1,n2;
    printf("enter the values n1&n2:");
    scanf("%d",&n1);
    scanf("%d",&n2);
    fflush(stdin);
    printf("choose choice +,-,*,/,%% :");
    scanf("%c",&ch);
    printf("%c",ch);

    if(ch=='+')
    {
        int sum=n1+n2;
        printf("sum of two number %d",sum);
    }
    else if(ch=='-'){
        int sub=n1-n2;
        printf("sub is %d",sub);
    }
    else if(ch=='*'){
        int mul=n1*n2;
        printf("mul is %d",mul);
    }
    else if(ch=='/'){
        int div=n1/n2;
        printf("div is %d",div);
    }
    else if(ch=='%'){
        int mod=n1%n2;
        printf("mod is %d",mod);
    }
    else{
        printf("invalid choice");
    }
    return 0;
}