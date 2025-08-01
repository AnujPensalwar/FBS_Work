#include<stdio.h>
void main(){
    int i=1,no;
    printf("table of the given number:");
    scanf("%d",&no);
    printf("table=%d:\n",no);
    while(i<=10){                         //while range
        printf("%d x %d=%d\n",no,i,no*i);
    i++;
}
}