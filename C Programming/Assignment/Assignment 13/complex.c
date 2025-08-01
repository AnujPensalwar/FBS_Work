#include <stdio.h>

typedef struct Complex{
    int real;
    int img;
}Complex;

void store(Complex*,int);
void display(Complex*,int);

void main(){
    Complex carr[3];
    store(carr,3);
    display(carr,3);

}
void store(Complex* carr,int size){
    int real,img;
    for(int i=0;i<size;i++){
        printf("Enter the real number:");
        scanf("%d",&carr[i].real);
        printf("Enter the imaginary number:");
        scanf("%d",&carr[i].img);
    }
}
void display(Complex*carr,int size){
    for(int i=0;i<size;i++){
        printf("\n%d+%di",carr[i].real,carr[i].img);
    }
}