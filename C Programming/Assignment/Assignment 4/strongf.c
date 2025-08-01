#include<stdio.h>
void main(){
    for(int j=1;j<=1000;j++)
    {
        int no=j;
        int rem,fact,sum=0,org=no;
        while(no>0)
        {
            rem=no%10;
            fact=1;
            for(int i=1;i<=rem;i++)
            {
                fact=fact*i;
            }
                sum=sum+fact;
                no=no/10;
            
        }
        if(sum==org)
        {
            printf("\n%d",j);
        }
    }
    
}