#include<stdio.h>
void main(){
    int mark;
    printf("enter the student marks:");
    scanf("%d",&mark);

    if(mark>=75){
        printf("Distinction");
    }
    else if(mark>=65){
        printf("first class");
    }
    else if(mark>=55){
        printf("second class");
    }
    else if(mark>=40){
        printf("pass");
    }
    else if(mark<40){
        printf("fail");
    }

    else {
        printf("invalid marks");
    }
}