#include <stdio.h>

void age();
void main(){
    age();
}
void age(){
    int age;
    printf("Enter the age:");
    scanf("%d",&age);
    if(age < 12){
        printf("Your child.");
    }
    else if(age >= 12 && age<=19){
        printf("Your teenager.");
    }
    else if(age >= 20 && age<=59){
        printf("Your adult.");
    }
     else if(age >= 60 && age<120){
        printf("Your senoir.");
    }
    else{
        printf("Please enter valid number.");
    }
}