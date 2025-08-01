#include <stdio.h>
#include <string.h>

char* replaceNth(char*,int);
void main(){
    char str[20];
    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);
    int n;
    printf("Enter the Nth index:");
    scanf("%d",&n);
    char* x=replaceNth(str,n);
    printf("%s",x);
}

char* replaceNth(char* str,int n){
    // int i=0;
    // int len=strlen(str);
    // // printf("%d",len);
    // while(str[i]!='\0'){
    //     if(i==n){
    //        while(i<len){
    //             str[i]=str[i+1];
    //             i++;
    //        }
    //     }
    // i++;
    // }
    int i=n;
    while(str[i]!='\0'){
        str[i]=str[i+1];
        i++;
    }
    return str;
}