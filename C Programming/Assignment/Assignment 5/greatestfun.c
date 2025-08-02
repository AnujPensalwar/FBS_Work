#include <stdio.h>

void great();
void main(){
    great();
}
void great(){
    int a , b, c;
    printf("Enter the value of a,b and c:");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b){
        if(a>c){
            printf("Value of a %d is greater",a);
        }
        else{
            printf("Value of c %d is greater",c);
        }
    }
    else if(b>c){
        printf("Value of b %d is greater",b);
    }
    else{
        printf("Value of c %d is greater",c);
    }
}