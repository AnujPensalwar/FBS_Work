#include<stdio.h>
void main(){
    int tmin=200, min,hr;
    hr=tmin/60;
    printf("total hours %d",hr);
    
    min=tmin%60;
    printf("remaining min %d", min);

}