#include <stdio.h>
#include <math.h>

int armstrong(int num);
int count(int num);
void main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if(armstrong(num)==1)
        printf("The given number is armstrong");
    else
        printf("The given number is not armstrong");

}
int armstrong(int num){
    int temp = num;
    int sum = 0;
    while(temp>0){
        int rem = temp % 10;
        sum = sum + pow(rem,count(num));
        temp =temp / 10;
    }    
    
    if(num==sum)
        return 1;
    return 0;
}
int count(int num){
    int count=0;
    while(num>0){
        num = num / 10;
        count++;
    }
    return count;
}