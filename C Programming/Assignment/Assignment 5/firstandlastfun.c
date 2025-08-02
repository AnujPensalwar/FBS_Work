#include <stdio.h>

int add();
void main(){
    printf("addition of first and last digit is %d",add());

}
int add(){
    int num,last,first,sum,temp;
    printf("Enter the number:");
    scanf("%d",&num);

    temp = num;
    last = num % 10;
    
    while(temp>10){
        temp = temp / 10;
    }

    first = temp;
    sum = first+last;
    return sum;
}