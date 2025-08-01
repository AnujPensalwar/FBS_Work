#include <stdio.h>

char* replace(char*,char);
void main(){
    char str[20];

     printf("Enter the string:");
     fgets(str,sizeof(str),stdin);
    char ch='a';
    char* x=replace(str,ch);
    printf("%s",x);

}
char* replace(char* str,char ch){
    int i=0;
    while(str[i]!='\0'){
        if(str[i]==ch){
            str[i]='$';
        }
    i++;
    }
    return str;
}