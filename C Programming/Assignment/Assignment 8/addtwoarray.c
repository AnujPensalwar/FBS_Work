#include <stdio.h>

void display(int*,int );
void storearray(int*,int);
void addtwoarray(int*,int*,int);
void main(){
    int size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    int brr[size];
    storearray(arr,size);
    display(arr,size);
    storearray(brr,size);
    display(brr,size);
    addtwoarray(arr,brr,size);
    // display(arr,size);
}
void storearray(int*brr,int n){
    printf("enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&brr[i]);
    }
}
void display(int*brr,int n){
    printf("Array is:");
    for(int i=0;i<n;i++){
        printf("%d ",brr[i]);
    }
}
void addtwoarray(int*arr,int*brr,int size){
    int crr[size];
    for(int i=0;i<size;i++){
        crr[i]=arr[i]+brr[i];
    }
    printf("elements of third array:");
    for(int i=0;i<size;i++){
        printf("%d ",crr[i]);
    }
}