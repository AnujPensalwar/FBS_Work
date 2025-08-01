#include <stdio.h>
char* mystrstr(char*,char*);
void main(){
    char str[]="mrunmayee";
    char ss[]="run";
    char * x = mystrstr(str,ss);
    if(x!=NULL)
        printf("sub string is found");
    else
        printf("sub string is not found");
}

char* mystrstr(char* str,char* ss){
    int i=0;
    while(str[i]!='\0'){
        if(str[i]==ss[0]){
            int j=1,k=i+1,flag=0;
            while(ss[j]!='\0'){
                if(ss[j]!=str[k]){
                    flag=1;
                    break;
                }
                j++,k++;
            }
            if(flag==0)
              return &str[i];
        }
    i++;
    }
    return NULL;
}