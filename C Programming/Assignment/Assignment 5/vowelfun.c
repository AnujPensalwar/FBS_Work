#include <stdio.h>

void vowel();
void main(){
    vowel();
}
void vowel(){
    char ch, a ,e,i ,o ,u;
    printf("enter the charater:");
    scanf("%c",&ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E'|| ch =='I' || ch =='O' || ch == 'U')
       printf("Given charater is vowel");
    else if(ch >= 'A' && ch <= 'z')
       printf("Given charater is consonent");
    else
       printf("it not alphabet");
}