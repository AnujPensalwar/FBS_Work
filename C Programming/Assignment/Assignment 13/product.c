#include <stdio.h>

typedef struct Product{
    int id;
    char name[20];
    int quantity;
    int price;
}Product;

void store(Product*,int);
void display(Product*,int);

void main(){
    Product carr[3];
    store(carr,3);
    display(carr,3);

}

void store(Product* carr,int size){
    int real,img;
    for(int i=0;i<size;i++){
        printf("Enter the id number:");
        scanf("%d",&carr[i].id);
        printf("Enter the name of product:");
        scanf("%s",&carr[i].name);
        printf("Enter the quantity of product:");
        scanf("%d",&carr[i].quantity);
        printf("Enter the price of product:");
        scanf("%d",&carr[i].price);
    }
}

void display(Product*carr,int size){
    for(int i=0;i<size;i++){
        printf("\nId:%d\nName:%s\nQuantity:%d\nPrice:%d",carr[i].id,carr[i].name,carr[i].quantity,carr[i].price);
    }
}