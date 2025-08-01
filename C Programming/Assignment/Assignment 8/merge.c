#include <stdio.h>

void store(int*,int);
void display(int*,int);
void merge(int*,int,int*,int);
void main(){
    // int arr[10],brr[10];
    int size1,size2;
    printf("enter the size of array 1:");
    scanf("%d",&size1);
    printf("enter the size of array 2:");
    scanf("%d",&size2);
    int arr[size1];
    int brr[size2];
    store(arr,size1);
    display(arr,size1);
    store(arr,size2);
    display(arr,size2);
    merge(arr,size1,brr,size2);
}
   void store(int*arr,int size){
    printf("enter the elements:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
}    
void display(int*arr,int size){
    printf("Array is:");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
void merge(int*arr,int size1,int*brr,int size2){
    int size=size1+size2;
    int crr[size];
    for(int i=0;i<size1;i++){
        crr[i]=arr[i];
    }
    for(int i=size1;i<size2;i++){
        crr[size1]=arr[size2];
    }
    printf("elements of merge array:");
    for(int i=0;i<size;i++){
        printf("%d ",crr[i]);
    }

}