#include <stdio.h>

int range();
void main(){
    printf("sum is %d",range());
}
int range(){
    int i,start,end,sum=0;
    printf("Enter the start number:");
    scanf("%d",&start);
    printf("Enter the end number:");
    scanf("%d",&end);
    
    for(i=start;i<=end;i++){
        sum = sum + i;
    }
    return sum;
}