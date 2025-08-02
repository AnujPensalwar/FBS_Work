// #include <stdio.h>

// void swap(int num1,int num2);
// void main(){
//     int num1,num2,temp;
//     printf("enter num1:");
//     scanf("%d",&num1);
//     printf("enter num2:");
//     scanf("%d",&num2);
//     swap(num1,num2);
// }
// void swap(int num1,int num2){
//     int temp = num1; 
//     num1 = num2; 
//     num2 = temp; 
//     printf("after swapping num1=%d and num2=%d",num1,num2);
// }

#include <stdio.h>

void swap(int num1,int num2);
void main(){
    int num1,num2,temp;
    printf("enter num1:");
    scanf("%d",&num1);
    printf("enter num2:");
    scanf("%d",&num2);
    swap(num1,num2);
}
void swap(int num1,int num2){
    int temp = num1; 
    num1 = num2; 
    num2 = temp; 
    // printf("after swapping num1=%d and num2=%d",num1,num2);
}

