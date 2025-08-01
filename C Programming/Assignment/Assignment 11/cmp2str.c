#include <stdio.h>

void main(){
    char str1[30];
    char str2[30];

    printf("Enter the string 1:");
    fgets(str1,sizeof(str1),stdin);
    printf("Enter the string 2:");
    fgets(str2,sizeof(str2),stdin);

    int count1=0,count2=0;
    int i = 0;
    while(str1[i]!='\0'){
        count1++;
        i++;
    }
    int j=0;
    while(str2[j]!='\0'){
        count2++;
        j++;
    }
    printf("Longest string:");
    if(count1>count2)
        printf("%s",str1);
    else
        printf("%s",str2);
}