#include <stdio.h>

int range(int start,int end);
void main(){
    int start,end;
    printf("Enter the start number:");
    scanf("%d",&start);
    printf("Enter the end number:");
    scanf("%d",&end);
    printf("sum is %d",range(start,end));
}
int range(int start,int end){
    int i,sum=0;
    
    for(i=start;i<=end;i++){
        sum = sum + i;
    }
    return sum;
}