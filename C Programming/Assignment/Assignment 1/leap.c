#include<stdio.h>
void main(){
    int y;
    printf("enter the year:");
    scanf("%d",&y);
    if(y%4==0 && y%100!=0 || y%400==0)
    {
        printf("leap yaer");
    }
    else{
    printf(" not leap yaer");
}
}