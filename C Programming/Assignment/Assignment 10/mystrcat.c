#include <stdio.h>
#include <string.h>

char* mystrcat(char*,char*);
void main(){
    char str1[20]="Hi ";
    printf("%u\n",str1);
    char str2[]="Mrunmayee";
    printf("%u\n",str2);
    char* x = mystrcat(str1,str2);
    printf("%u\n",x);
    printf("%s",x);
}

char* mystrcat(char*str1,char*str2){
    int i = strlen(str1);
    int j=0;
    while(str2[j]!='\0'){
        str1[i]=str2[j];
        i++,j++;
    }
    return str1;
}