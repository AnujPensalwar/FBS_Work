#include <stdio.h>

void op();
void main(){
    op();
}
void op(){
    int a,b;
    char op;
    printf("\nEnter the value for a:");
    scanf("%d",&a);
    printf("\nEnter the value for b:");
    scanf("%d",&b);
    printf("\n+ \n- \n* \n/ \n%%");
    printf("\nChoose one operator form the list of operators:");
    // fflush(stdin);  //it is used to clear the buffer 
    scanf(" %c",&op);

    if(op == '+'){
        int sum = a + b;
        printf("Addition of a and b is: %d",sum);
    }
    else if(op == '-'){
        int sub = a - b;
        printf("Substraction of a and b is:%d",sub);
    }
    else if(op == '*'){
        int mul = a * b;
        printf("Multiplication of a and b is:%d",mul);
    }
    else if(op == '/'){
        float div = (a *1.0)/ b;
        printf("Division of a and b is:%.2f",div);
    }
    else if(op == '%'){
        int mod = a % b;
        printf("Modulo of a and b:%d",mod);
    }
    else{
        printf("Enter the valid operator");
    }
}