#include <stdio.h>

char* replace(char*);
void main(){
    char str[50]="Akanksha is a mad girl";
    char* x =replace(str);
    printf("%s",x);
}

char* replace(char* str){
    int i = 0;
    while(str[i]!=0){
        if(str[i]==' '){
            str[i]='@';
        }
    i++;
    }
    return str;
}