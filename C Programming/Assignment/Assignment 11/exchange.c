#include <stdio.h>
#include <string.h>

char* exchange(char*);
void main(){
    char str[20]="mrunmayee";
    char*x = exchange(str);
    printf("%s",x);
}

char* exchange(char* str){
    int i = 0;
    int len = strlen(str);
    int temp = str[i];
    str[i] = str[len-1];
    str[len-1] = temp;
    
    return str;
}