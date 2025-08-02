#include <stdio.h>

 int getNthprimeno(int,int,int);
 void main(){
    int start,end,pos;
    printf("enter the start number:");
    scanf("%d",&start);
    printf("enter the end number:");
    scanf("%d",&start);
    printf("enter the position:");
    scanf("%d",&pos);
    int n = getNthprimeno(start,end,pos);
    printf("%d",n);
 }

 int getNthprimeno(int start,int end,int pos){

    int count = 0; 
    for(int i=start;i<=end;i++){
        int no=i, flag = 0;
        for(int j =2;j<no;j++){
            if(no%i==0){
                flag=1;
                break;
            }
        }
           
        if(flag==0){
            count++;
        }
        if(count==pos){
            return no;
        }
        
    }
    // int sum = first + sec;
    // printf("\nsum is %d",sum);
}
