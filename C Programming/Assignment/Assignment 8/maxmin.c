#include <stdio.h>
void store(int*,int);
void display(int*,int);
void max(int*,int);
void min(int*,int);

void main(){
    int size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    store(arr,size);
    display(arr,size);
    max(arr,size);
    min(arr,size);

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
void max(int*arr,int size){
    int max=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>max)
            max=arr[i];
    }
    printf("\nmaximum number is %d",max);
}
void min(int*arr,int size){
    int min=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]<min)
            min=arr[i];
    }
    printf("\nminimum number is %d",min);
}