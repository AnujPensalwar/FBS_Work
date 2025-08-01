#include <stdio.h>
int mystrlen(char*);
void main(){
    char str[20]="mrunmayee";
    int x = mystrlen(str);
    printf("Length=%d",x);
}

int mystrlen(char* str){
    int i=0;
    int count = 0;
    while(str[i]!='\0'){
        count++;
        i++;
    }
    return count;
}