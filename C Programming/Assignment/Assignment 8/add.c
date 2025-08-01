#include <stdio.h>

void display(int*,int );
void storearray(int*,int);
void addtwoarray(int*,int,int*,int);
int main(){
    int size;
    scanf("Enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    int brr[size];
    storearray(arr,size);
    display(arr,size);
    storearray(brr,size);
    display(brr,size);
    addtwoarray(arr,size,brr,size);
    display(arr,size);
    return 0;
}
void storearray(int*brr,int n){
    printf("enter the elements:");
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&brr[i]);
    }
}
void display(int*brr,int n){
    printf("Array is:");
    int i;
    for( i=0;i<n;i++){
        printf("%d ",brr[i]);
    }
}
void addtwoarray(int*arr,int size1,int*brr,int size2){
    int crr[size1];
    for(int i=0;i<size1;i++){
        crr[i]=arr[i]+brr[i];
    }
    printf("elements of third array:");
    
    for(int i=0;i<size1;i++){
        printf("%d ",crr[i]);
    }
}
