#include <stdio.h>

void operation();
void main(){
    operation(); 
}
void operation(){
    int n1,n2;
    char ch;

    printf("Enter 1st Number = ");
    scanf("%d",&n1);

    printf("Enter 2nd Number = ");
    scanf("%d",&n2);

    printf("Enter your choice =  ");
    // fflush(stdin);
    scanf(" %c",&ch);

    if(ch == '+'){
        int sum = n1 + n2;
        printf("Addition of a and b is: %d",sum);
    }
    else if(ch == '-'){
        int sub = n1 - n2;
        printf("Substraction of a and b is:%d",sub);
    }
    else if(ch == '*'){
        int mul = n1 * n2;
        printf("Multiplication of a and b is:%d",mul);
    }
    else if(ch == '/'){
        float div = (n1 *1.0)/ n2;
        printf("Division of a and b is:%.2f",div);
    }
    else if(ch == '%'){
        int mod = n1 % n2;
        printf("Modulo of a and b:%d",mod);
    }
    else{
        printf("Enter the valid operator");
    }
}