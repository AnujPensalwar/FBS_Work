#include<stdio.h>
void even();
void main(){
	even();
}
void even()
{
    int no;
    printf("enter the number:");
    scanf("%d",&no);
    
    
    if(no%2==0){
        printf("number is even%d");
    }
    else{
        printf("number is odd");
    }
}