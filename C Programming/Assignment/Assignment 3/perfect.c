#include<stdio.h>
void main(){
    int no=28,sum=0;
    int i=1;
    while(i<=no/2)
    {
        if(no%i==0){
            sum=sum+i;
        }
        i++;
    }
    if(sum==no){
        printf("the no is perfect");
    }
    else{
        printf("the number is not perfect");
    }
}
