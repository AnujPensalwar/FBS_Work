#include<stdio.h>
void main(){
    int num,start, end,sum=0;
    printf("print the number bet 1to 1000 are\n");
    for(int num=1;num<=1000;num++){
        sum=0;

        for(int start=1;start<num;start++){
          if(num%start==0){
            sum=sum+start;
          }
        }
        if(sum==num){
            printf("%d\n",num);
        }
    }
}