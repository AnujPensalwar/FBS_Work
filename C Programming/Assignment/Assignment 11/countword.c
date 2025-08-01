#include <stdio.h>

void main(){
    // char str[20]="mrunmayee surate";
    char str[20];
    fgets(str,sizeof(str),stdin);
//    int c =strcspn(str, "\n");
//    printf("%d",c);
     str[strcspn(str, "\n")] = '\0';
    int i=0,count=0;
    while(str[i]!='\0'){
        if(str[i]!=' '){
//            printf("%c",str[i]);
            count++;
//            printf("%d",count);
        }
    i++;
    }
    printf("%d",count);
}