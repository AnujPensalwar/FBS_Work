#include <stdio.h>
#include <string.h>
char* mystrrev(char*);
void main(){
    char str[]="hello";
    char* x = mystrrev(str);
    printf("%s",x);
}

char* mystrrev(char* str){
    int len=strlen(str);
    int i=0;
    while(i<len){
         int temp = str[len-1];
         str[len-1]=str[i];
         str[i]=temp;

         i++;
         len--;
    }
    return str;
}