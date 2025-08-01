#include <stdio.h>
void main(){
    int size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int arr[size];

    printf("Enter the elements in array:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array is:");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\nsorted array is:");
    // // for(int i=5;i>=0;i--){
    // //     printf("%d ",arr[i]);
    // }
   
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

    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
