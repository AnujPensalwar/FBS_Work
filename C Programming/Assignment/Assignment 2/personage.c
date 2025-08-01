#include<stdio.h>
void main()
{
    int age;
    printf("enter the age:");
    scanf("%d",&age);

    if(age>=60)
    {
        printf("\nperson is senior");
    }
    else if(age>=20 && age<=59){
        printf("\nperson is adult");
    }
    else if(age>=12 && age<=19){
        printf("\nperson is teeneger");
    }
    else if(age<12)
    {
        printf("\nchild");
    }
    else{
        printf("inavalid");
    }
}