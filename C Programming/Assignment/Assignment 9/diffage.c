#include <stdio.h>

// void main(){
//     int f_age,s_age,countage;
//     printf("enter the age of father:");
//     scanf("%d",&f_age);
//     printf("enter the age of son");
//     scanf("%d",&s_age);
//     // for(i=0;father!=2*son;i++){
//     //     father++;
//     //     son++;
//     //     // printf("%d",i);
//     // }
//     countage = 0;
//     while(f_age!=2*s_age){

//         f_age++;
//         s_age++;
//         countage++;
//     }
//     printf("after %d years father's age will be twice of son's age i.e.father=%d and son=%d",countage++,f_age,s_age);
// }


int check_age(int,int);
void main(){
    int f_age,s_age;
    printf("enter the age of father:");
    scanf("%d",&f_age);
    printf("enter the age of son");
    scanf("%d",&s_age);
    int x = check_age(f_age,s_age);
    printf("after %d years",x);
    

}

int check_age(int f_age,int s_age){
    int countage = 0;
    while(f_age!=2*s_age){

        f_age++;
        s_age++;
        countage++;
    }
    printf("%d",countage);
    if(f_age==2*s_age)
        return countage;
    
}