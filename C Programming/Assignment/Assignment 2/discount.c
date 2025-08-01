#include<stdio.h>
void main(){
    int price,discount;
    char student;
    printf("Enter the price:\n");
    scanf("%d",&price);
    printf("are you student:y/n:\n");
    scanf(" %c",&student);
    if(student=='y'){
        if(price>500){
            discount=0.2*price;
            price=price-discount;
        }
        else{
            discount=0.1*price;
            price=price-discount;
        }
        printf("the price is =%d",price);
    }
    else if(student=='n'){
        if(price>600){
            discount=0.15*price;
            price=price-discount;
        }
        else{
            price=price;
        }
        printf("the price is =%d",price);
    }
    else{
        printf("invalid price");
    }
}