#include<stdio.h>
void main(){
    int start,end,sum=0,current;
    printf("enter the start range:");
    scanf("%d",&start);
    printf("enter the end of the range:");
    scanf("%d",&end);
    current=start;
    while(current<=end)
    {
     sum=sum + current;
     current++;
     }
     printf("sum of numbers from %d to %d is: %d\n",start,end,sum);

}