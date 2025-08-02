#include <stdio.h>

void result();
void main(){
    result();
}
void result(){
    int res,marks;
    printf("Enter your marks:");
    scanf("%d",&marks);
    if(marks<=100){
    if(marks>75){
        printf("Distinction");
    }
    else if(marks>65){
        printf("First Class");
    }
    else if(marks>55){
        printf("Second Class");
    }
    else if(marks>=40){
        printf("Pass Class");
    }
    else{
        printf("Fail");
    }
    }
    else{
        printf("Enter valid marks!!");
    }
}