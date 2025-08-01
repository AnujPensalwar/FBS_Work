#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter the value of a,b &c:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
    printf("a is greatest number:");
    }
    else if(b>c && c<a){
        printf("b is greatest number:");
    }
    else{
        printf("c is greatest number:");
    }
}