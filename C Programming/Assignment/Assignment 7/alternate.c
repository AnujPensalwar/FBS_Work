#include <stdio.h>

void main(){
    int size;
    printf("enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array is:");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("Alternate number in array is:");
    for(int i=0;i<size;i++){
        if(i%2==0){
            printf("%d ",arr[i]);
        }
    }
}