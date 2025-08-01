#include <stdio.h>

void main(){
    char str[]="madam";
//    int size = sizeof(str)-1;
//    int sizenew=0;
    int i=0,j=0;
    while(str[i]!='\0'){
        if(i%2!=0){
            str[j++]=str[i];
        }
        i++;
    }
    str[j]='\0';
    printf("%s",str);
}