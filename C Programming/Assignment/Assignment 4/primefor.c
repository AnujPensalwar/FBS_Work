#include<stdio.h>
void main(){
    int num,start,count=0;
    printf("print a number between 1to 100 are\n:");
    

    for(int num=2; num<=100; num++){
        count=0;
    
      for(int start=1;start<=100;start++){
          if(num%start==0){
              count++;
            }
          }
          if(count==2){
            printf("%d\n",num);
          }
        }  
}