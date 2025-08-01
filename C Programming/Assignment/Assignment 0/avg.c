#include<stdio.h>
void main(){
    int n1,n2,n3,n4,n5,avg ,sum;
    printf("enter five number:\n");
    scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
    sum=n1+n2+n3+n4+n5;
    avg=sum/5;
    printf("the avg of five numbers %d",avg);
 }