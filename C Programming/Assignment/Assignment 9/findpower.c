#include <stdio.h>
#include <math.h>

void main(){
    int num,i=1;
    printf("\nenter the num:");
    scanf("%d",&num);
    int res = 1;
    while(res<=num){
        res = pow(2,i);
        if(res==num){
            printf("\nyes it power of two");
            printf("\n%d is the power",i);
            break;
        }
        i++; 
    }
    if(res>num)
    printf("It is not power of two");
    
}