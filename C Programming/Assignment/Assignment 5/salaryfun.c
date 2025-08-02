#include <stdio.h>

void salary();
void main(){
    salary();
}
void salary(){
    float basic,total_salary,da,ta,hra;
    printf("Enter your salary:");
    scanf("%f",&basic);
    if(basic<=5000){
        da = (10 * basic) / 100.0;
        ta = (20 * basic) / 100.0;
        hra = (25 * basic) /100.0;
        total_salary = basic + da + ta + hra;
        printf("Your total salary is %.2f",total_salary);
    }
    else{
        da = (15 * basic) / 100.0;
        ta = (25 * basic) / 100.0;
        hra = (30 * basic) /100.0;
        total_salary = basic + da + ta + hra;
        printf("Your total salary is %.2f",total_salary);
    }
}