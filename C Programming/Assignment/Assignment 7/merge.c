#include <stdio.h>
void main(){
    // int arr[10],brr[10];
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
    int brr[size2];
    printf("enter the elements in second array:");
    for(int i=0;i<5;i++){
        scanf("%d",&brr[i]);
    }
    printf("elements of second array:");
    for(int i=0;i<5;i++){
        printf("%d ",brr[i]);
    }

    for(int i=0;i<5;i++){
        arr[5+i]=brr[i];
    }
    printf("elements of merge array:");
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }

}