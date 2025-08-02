#include <stdio.h>

int add(int num);
void main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("addition of first and last digit is %d",add(num));
}
int add(int num){
    int last,first,sum,temp;
    temp = num;
    last = num % 10;
    
    while(temp>10){
        temp = temp / 10;
    }

    first = temp;
    sum = first+last;
    return sum;
}