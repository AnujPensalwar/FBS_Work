#include <stdio.h>

void evenodd();
void main(){
    evenodd();
}
void evenodd(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if(num>0){
       if(num%2==0){
           printf("even");
        }
       else{
           printf("odd");
        }
    }
    else{
        printf("enter valid number.");
    }
}