#include <stdio.h>

void armstrong(int num);
void perfect(int num);
void strong(int num);
void pallindrome(int num);

void main(){
    int num;
    char ch;
    printf("enter the number:");
    scanf("%d",&num);
    printf("check the number is:");
    printf("\n1.Armstrong\n2.Perfect\n3.Strong\n4.Pallindrome");
    printf("\nEnter your choice:");
    scanf(" %c",&ch);

    if(ch=='1'){
        armstrong(num);
    }
    else if(ch=='2'){
        perfect(num);
    }
    else if(ch=='3'){
        strong(num);
    }
    else if(ch=='4'){
        pallindrome(num);
    }
    else
        printf("Enter valid choice!!");
}


    void armstrong(int num){
        int temp = num;
        int count = 0;
        while(temp!=0){
        temp = temp /10;
        count++;
        }
        temp = num;
        int sum=0;
            while(temp>0){
            int rem = temp % 10;
            int pow = 1;
            for(int i =1;i<=count;i++){
            pow = pow * rem; 
            }
            sum = sum + pow;
            temp = temp / 10;
        }
        if(sum==num)
              printf("This number is Armstrong");
        else{
            printf("Number is not Armstrong");
        }
    }

    void perfect(int num){
        int perfect,sum=0,i=1;
        perfect = num;
    
        while(i<=num/2){  //need to check only half of the number 
            if(num%i==0){
                sum = sum + i;
            }
            i++;
        }
        
        if(perfect==sum){
            printf("number is perfect\n");
        }
        else{
            printf("number is not perfect\n");
        }
    }
    void strong(int num){
        int fact,sum=0,res,mod;
        res = num;
        while(num!=0){
            mod = num % 10;
            fact = 1;
            while(mod!=0){
                fact =fact * mod;
                mod--;
            }
            sum = sum + fact;
            num = num / 10;
        }
        if(res == sum)
            printf("The number is strong number.");
        else
            printf("The number is not strong number.");
    }    
    void pallindrome(int num){
        int sum,rev,mod;
        rev = num;
        while(num!=0){
            mod = num % 10;
            sum = sum * 10 + mod;
            num = num / 10;
            // printf("%d\n",sum);
        }
    
        if(sum == rev){
            printf("The number is pallindrome number");
        }
        else{
            printf("The number is not pallindrome number");
        }
    }