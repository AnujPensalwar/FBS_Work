#include <stdio.h>

void count();
void main(){
    count();
}
void count(){
    int num,count;
    printf("enter the number:");
    scanf("%d",&num);
    count = 0;
    while(count<10){
        printf("%d ",num);
        count++;
        num = num+2;
    }
}