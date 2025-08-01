#include <stdio.h>
#include <string.h>

char* mystrcat(char*,char*,int);
void main(){
    char str1[20]="Hi ";
    printf("%u\n",str1);
    char str2[]="Mrunmayee";
    int n = 5;
    printf("%u\n",str2);
    char* x = mystrcat(str1,str2,n);
    printf("%u\n",x);
    printf("%s",x);
}

char* mystrcat(char*str1,char*str2,int n){
    int i = strlen(str1);
    int j=0;
    while(j<n){
        str1[i]=str2[j];
        i++,j++;
    }
    return str1;
}