#include <stdio.h>
void main(){
    // int arr[5],brr[5],crr[5];
    int size1;
    printf("enter the size of array 1:");
    scanf("%d",&size1);
    int arr[size1];
    printf("enter the elements in first array:");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("elements of first array:");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    int size2;
    printf("enter the size of array 2:");
    scanf("%d",&size2);
    printf("enter the elements in second array:");
    int brr[size2];
    for(int i=0;i<5;i++){
        scanf("%d",&brr[i]);
    }
    printf("elements of second array:");
    for(int i=0;i<5;i++){
        printf("%d ",brr[i]);
    }
    int crr[size1];
    for(int i=0;i<size1;i++){
        crr[i]=arr[i]+brr[i];
    }
    printf("elements of third array:");
    for(int i=0;i<5;i++){
        printf("%d ",crr[i]);
    }

}    