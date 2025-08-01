#include <stdio.h>
void display(int*,int );
void storearray(int*,int);
void alternate(int*,int);

void main(){
    int size;
    // scanf("Enter the size of array:");
    // scanf("%d",&size);
    int arr[10];
    storearray(arr,5);
    display(arr,5);
    alternate(arr,5);
    // display(arr,5);
}

void storearray(int*arr,int n){
    printf("enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void display(int*arr,int n){
    printf("Array is:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
void alternate(int*arr,int size){
    printf("Alternate number in array is:");
    for(int i=0;i<size;i++){
        if(i%2==0){
            printf("%d ",arr[i]);
        }
    }
}