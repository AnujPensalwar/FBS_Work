#include <stdio.h>
#include <string.h>

void main(){
    char str[20];
    char ch;
    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);
    printf("Enter the character to search in string:");
    // fflush(stdin);
    scanf("%c",&ch);
    // printf("%c",ch);
    char* x = strchr(str,ch);
    if(x!=NULL)
        printf("character is found in string");
    else
        printf("character is not found in string");
}