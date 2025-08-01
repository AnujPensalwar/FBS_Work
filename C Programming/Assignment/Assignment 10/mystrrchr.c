#include <stdio.h>
char* mystrchr(char*,char);
void main(){
    char str[]="mrunmayee surate";
    printf("size=%d",sizeof(str));
    char ch = 'a';
    char* x = mystrchr(str,ch);
    printf("%u\n",x);  //Use %p to print pointers safely.
    if(x!='\0'){
        printf("character %c is found at %d index.",ch,x-str);
    }
    else
        printf("character %c is not found",ch);
}

char* mystrchr(char* str,char ch){
    int len = sizeof(str);
    printf("size=%d\n",len);
    while(len>=0){
        if(str[len]==ch){
            return &str[len];
        }
    len--;
    }
    return NULL;
}