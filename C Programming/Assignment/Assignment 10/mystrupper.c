#include <stdio.h>
char* mystrupper(char*);
void main(){
    char str[]="mrunmayee";
    char* x = mystrupper(str);
    printf("%s",x);
}

char* mystrupper(char*str){
    int i=0;
    while(str[i]!=0){
        if(str[i]>65)
          str[i]=str[i]-32;
    i++;
    }
    return str;
}