#include<stdio.h>
void main(){
    int num;
    printf("enter a number:");
    scanf("%d",num);
    int count=0;
    int temp;
    while(num>0){
      num=num/10;
      count++;
    }
    temp=num;
    int sum=0;
    while (temp>0)
    {
        int rem=temp%10;
        int pow=1;
        for(int i=1;i<=count;i++){
            pow=pow*rem;
        }
        sum=sum+pow;
        temp=temp/10;

    }
    if(num==sum){
        printf("number is amstrong");
    }else{
        printf("not amstrong");
    }
    
}