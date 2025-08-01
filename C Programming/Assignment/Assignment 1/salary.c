#include<stdio.h>
void main(){
    float totsal,basic,da,ta,hra;
    printf("ENTER THE salary:");
    scanf("%f",&basic);
    if(basic<=5000){
        da=(basic*10)/100.0;
        ta=(basic*20)/100.0;
        hra=(basic*30)/100.0;
        totsal=basic+da+ta+hra;
        printf("your total salary is %2f",totsal);
    }
    else{
        da=(basic*15)/100.0;
        ta=(basic*25)/100.0;
        hra=(basic*30)/100.0;
        totsal=basic+da+ta+hra;
        printf("your total salary is %2f",totsal);
    } 

}