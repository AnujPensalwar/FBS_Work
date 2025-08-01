#include <stdio.h>
char* mystrchr(char*,char);
void main(){
    char str[]="mrunmayee";
    char ch = 'm';
    char* x = mystrchr(str,ch);
    printf("%u\n",x);  //Use %p to print pointers safely.
    if(x!='\0'){
        printf("character %c is found at %d index.",ch,x-str);
    }
    else
        printf("character %c is not found",ch);
}

char* mystrchr(char* str,char ch){
    int i = 0;
    while(str[i]!='\0'){
        if(str[i]==ch){
            return &str[i];
        }
    i++;
    }
    return NULL;
}