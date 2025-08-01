#include <stdio.h>
#include <string.h>
void main(){
    char str1[30];
    printf("Enter the string:");
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1, "\n")] = '\0';
    char str2[30];

    int len=strlen(str1);
    int i =0;
    while(len>=0){
        str2[i]=str1[len-1];
        len--;
        i++;
    }
    
    int j=0;
    int flag;
    while(str1[j]!='\0'){
        if(str1[j]==str2[j])
            flag = 0;
        else
            flag =1;
            break;
        
    j++;
    }
    // printf("%d",flag);
    if(flag==0)
        printf("The given string is pallindrome");
    else
        printf("The given string is not pallindrome");

}