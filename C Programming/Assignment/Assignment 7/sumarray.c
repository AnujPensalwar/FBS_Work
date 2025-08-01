#include <stdio.h>

void main(){
     int size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter the elements:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nArray is:");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    int sum=0;
    for(int i=0;i<size;i++){
        sum = sum + arr[i];
    }
    printf("Addition of array is %d",sum);
}