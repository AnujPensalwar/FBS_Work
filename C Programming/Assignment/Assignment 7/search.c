#include <stdio.h>
void main(){
    int arr[10],ele;

    for(int i=0;i<5;i++){
        printf("enter %d element:",i+1);
        scanf("%d",&arr[i]);
    }

    printf("enter the element to find:");
    scanf("%d",&ele);

    int flag = 0;
    for(int i=0;i<5;i++){
        if(arr[i]==ele){
            printf("%d is found at %d location",ele,i+1);
            flag=1;
            break;
        }
    }    
        if(flag==0){
        printf("element is not found");
    }
    
}