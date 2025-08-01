#include <stdio.h>
char* mystrlower(char*);
void main(){
    char str[]="MRUNMAYee";
    char* x = mystrlower(str);
    printf("%s",x);
}

char* mystrlower(char*str){
    int i=0;
    while(str[i]!=0){
        if(str[i]<97)
         str[i]=str[i]+32;
    i++;
    }
    return str;
}