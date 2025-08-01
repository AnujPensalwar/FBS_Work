#include <stdio.h>

void main(){
    int size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array is:");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    int max=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>max)
            max=arr[i];
    }
    printf("maximum number is %d",max);

    int min=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]<min)
            min=arr[i];
    }
    printf("minimum number is %d",min);
}