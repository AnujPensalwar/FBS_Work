#include <stdio.h>

int countvowel(char*);
void main(){
    char str[20]="mrunmayee";
    int count = countvowel(str);
    printf("Number of vowels is %d",count);
}

int countvowel(char* str){
    int i = 0,count=0;
    while(str[i]!='\0'){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            count++;
        }
    i++;
    }
    return count;
}