#include<stdio.h>
void main(){
    char ch;
    printf("enter the alphabet:\n");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        printf("alpha is vowel");
    }
    else{
    printf("alpha is consonent");
    }

    if(ch>=97 && ch<=122)
    {
        ch=ch-32;
        printf("\n%c",ch);
        printf("\n the character is converted into uppercase");

    }
    else if(ch>=65 && ch<=90)
    {
        ch=ch+32;
        printf("\n%c",ch);
        printf("\n the character is converted into lowercase");
        
    }
    else{
        printf("speical character");
    }
}