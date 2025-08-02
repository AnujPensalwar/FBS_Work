#include <stdio.h>

typedef struct Book{
    char name[20];
    int id;
    char author[20];
    int price;
}Book;

void storeBook(Book*,int);
void displayBook(Book*,int);
void main(){
    Book barr[3];
    storeBook(barr,3);
    displayBook(barr,3);
}

void storeBook(Book* barr,int size){
    for(int i=0;i<size;i++){
    printf("Name:");
    scanf("%s",&barr[i].name);
    printf("Id:");
    scanf("%d",&barr[i].id);
    printf("Author:");
    scanf("%s",&barr[i].author);
    printf("Price:");
    scanf("%d",&barr[i].price);
    }
}

void displayBook(Book*barr,int size){
    for(int i=0;i<size;i++){
    printf("\nName:%s\nId:%d\nAuthor:%s\nPrice:%d",barr[i].name,barr[i].id,barr[i].author,barr[i].price);
    }
}