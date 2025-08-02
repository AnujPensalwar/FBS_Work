#include <stdio.h>

void add();
void main(){
    add();
}
void add(){
    int num1,num2,add;
    printf("enter the two numbers:");
    scanf("%d%d",&num1,&num2);
    add = num1 + num2;
    printf("Addition of numbers is %d",add);
}