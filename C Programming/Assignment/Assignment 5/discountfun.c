#include <stdio.h>

void dic();
void main(){
    dic();
}
void dic(){
    int discount,price;
    float total_amount;
    char category;
    printf("Enter the price:");
    scanf("%d",&price);
    printf("Are you a student?(y/n):");
    scanf(" %c",&category);
    if(category =='y'){
        if(price>500){
            total_amount = price - (price*20.0)/100;
        }
        else{
            total_amount = price - (price*10.0)/100;
        }
        printf("You have to pay %.2f",total_amount);
    }
    else if(category == 'n'){
        if(price>600){
            total_amount = price - (price*15.0)/100;
            printf("You have to pay %.2f",total_amount);
        }
        else{
            printf("You are not eligible for discount");
        }
    }
    else{
        printf("Enter valid answer...");
    }
}