// #include <stdio.h>

// void main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }
// output:
// * 
// * * 
// * * *
// * * * *
// * * * * *

// #include <stdio.h>

// void main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
// }
// output:
// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

// #include <stdio.h>
// void main(){
//     for(int i=2;i<=10;i+=2){  //here instead of i++ i need to increment i by 2 because inner loop satisfied the condition so that cond true for 3 also.
//         for(int j=2;j<=i;j++){
//             if(j%2==0)
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
// }
// output:
// 2 
// 2 4 
// 2 4 6 
// 2 4 6 8 
// 2 4 6 8 10 

// #include<stdio.h>
// void main()
// {
//     for(int i=1;i<=5;i++)
//     {
//         for(int j=1;j<=5-i;j++)
//         {
//         printf(" ");
//         }
//         for(int j=1;j<=i;j++){
//             printf("*");
//         }
//     printf("\n");
// }
// }
// output:
//     *
//    **
//   ***
//  ****
// *****

#include<stdio.h>
void main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5-i;j++)
        {
        printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
    
    printf("\n");
}
}
// output:
    