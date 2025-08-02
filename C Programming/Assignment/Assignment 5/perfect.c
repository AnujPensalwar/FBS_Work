#include <stdio.h>

int perfect(int num);
void main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(perfect(num)==1)
        printf("perfect number");
    else    
        printf("not perfect number");

}

int perfect(int num){
    int perfect,sum=0,i=1;

    perfect = num;

    while(i<=num/2){  //need to check only half of the number 
        if(num%i==0){
            sum = sum + i;
        }
        i++;
    }
    if(perfect==sum)
        return 1;

    return 0;
}