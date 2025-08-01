#include <stdio.h>
void store(int*,int);
void display(int*,int);
void isprime(int*,int);
void main(){
    int size;
    printf("enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    store(arr,size);
    display(arr,size);
    isprime(arr,size);
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
void isprime(int*arr,int size){
    printf("prime number in array is:");
    for(int i=0;i<size;i++){
        int flag=0;
        for(int j=2;j<=arr[i]/2;j++){
            if(arr[i]%j==0){
                flag=1;
                break;
            }
        }
    if(flag==0)
        printf("%d ",arr[i]);
    }
    
}