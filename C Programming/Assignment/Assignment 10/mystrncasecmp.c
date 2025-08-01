#include <stdio.h>

int mystrncasecmp(char*,char*,int);
void main(){
    char str1[]="heLlo";
    char str2[]="elLo";
    int n=3;
    int x = mystrncasecmp(str1,str2,n);
    printf("%d",x);
}

int mystrncasecmp(char* str1,char* str2,int n){
    int i=0,flag;
    while(i<n){
        if(str1[i]==str2[i]||str1[i]-str2[i]==-32||str1[i]-str2[i]==32)
            flag=0;
        
        else
            return 1;
    i++;
    }
    return flag;
}