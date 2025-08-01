#include <stdio.h>
char* mystrcpy(char*,char*);
void main(){
    char str1[20]="Mrunmayee";
    char str2[20];
    char*x=mystrcpy(str2,str1);
    printf("%s",x);
}
char*  mystrcpy(char*str2,char*str1){
    int i =0;
    while(str1[i]!='\0'){
        str2[i]=str1[i];
        i++;
    }
    str2[i]='\0';
   return str2;
}