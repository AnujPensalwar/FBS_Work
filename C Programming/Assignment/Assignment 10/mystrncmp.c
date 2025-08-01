#include <stdio.h>

int mystrncmp(char*,char*,int);
void main(){
    char str1[]="Mrunmayee";
    char str2[]="Mrnayee";
    int n=3;
    int x = mystrncmp(str1,str2,n);
    printf("%d",x);
}

int mystrncmp(char* str1,char* str2,int n){
    int i=0,flag;
    while(i<n){
        if(str1[i]==str2[i])
            flag = 0;
        else
            return 1;
    i++;
    }
    return flag;
}
