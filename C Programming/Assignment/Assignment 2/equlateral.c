#include<stdio.h>
void main(){
     int s1,s2,s3;
     printf("enter the side:");
     scanf("%d%d%d",&s1,&s2,&s3);

     if(s1==s2&&s2==s3){
        printf("equilateral traingle");
     }
     else if(s1==s2||s2==s3||s1==s3){
        printf("isoscale traingle");
     }
     else {
        printf("scalene traingle");
     }
}