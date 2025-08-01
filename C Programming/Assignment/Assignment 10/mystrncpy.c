#include <stdio.h>
char* mystrncpy(char*,char*,int);
void main(){
    char str1[20]="Mrunmayee";
    char str2[20];
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    char*x=mystrncpy(str2,str1,n);
    printf("%s",x);
}
char*  mystrncpy(char*str2,char*str1,int n){
    int i =0;
    while(i<n){
        str2[i]=str1[i];
        i++;
    }
    str2[i]='\0';
   return str2;
}