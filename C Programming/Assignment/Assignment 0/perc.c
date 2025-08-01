#include<stdio.h>
void main(){
    float s1,s2,s3,s4,s5,sum,per;
    printf("enter five sub marks :\n");
    scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
    sum=s1+s2+s3+s4+s5;
    per=sum/500*100;
    printf("percentage=%f",per);

}