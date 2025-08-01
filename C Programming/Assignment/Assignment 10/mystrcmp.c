#include <stdio.h>

int mystrcmp(char*,char*);
void main(){
    char str1[]="Mrunmayee";
    char str2[]="Mrunayee";
    int x = mystrcmp(str1,str2);
    printf("%d",x);
}

int mystrcmp(char* str1,char* str2){
    int i=0,flag;
    while(str1[i]!='\0'){
        if(str1[i]==str2[i])
            flag = 0;
        else
            return 1;
    i++;
    }
    return flag;
}
