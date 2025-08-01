#include <stdio.h>

void store(int*,int);
void display(int*,int);
void sort(int*,int);
void main(){
    int size;
    printf("enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    store(arr,size);
    display(arr,size);
    sort(arr,size);
    display(arr,size);
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
void sort(int*arr,int size){
//    printf("\nsorted array is:");
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
        if(arr[i]>arr[j]){
        int temp;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        }
     }
    }
}