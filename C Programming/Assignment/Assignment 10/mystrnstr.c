#include <stdio.h>
char* mystrnstr(char*,char*,int);
void main(){
    char str[]="mrunmayee";
    char ss[]="mrunmay";
    int n=8;
    char * x = mystrnstr(str,ss,n);
    if(x!=NULL)
        printf("sub string is found");
    else
        printf("sub string is not found");
}

char* mystrnstr(char* str,char* ss,int n){
    int i=0;
    while(i<n){
        printf("hi");
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