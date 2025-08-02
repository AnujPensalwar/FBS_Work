#include <stdio.h>
void area();
void main(){
    area();
}

 void area(){
    int r;
    printf("enter the radius:");
    scanf("%d",&r);
    float area = 3.14 * r * r;
    printf("Area of circle is %.2f",area);
}