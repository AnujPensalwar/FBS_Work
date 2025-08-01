#include <stdio.h>
typedef struct Admin{
    int id;
    char name[20];
    int salary;
    int allowance;
}Admin;


void storeAdmin(Admin*,int);
void displayAdmin(Admin*, int);
void main(){
    Admin adarr[3];
    printf("Enter employee details:");
	storeAdmin(adarr,3);
    printf("\nEmployee details is as follows\n");
	displayAdmin(adarr,3);
}

void storeAdmin(Admin* ptr,int size)
{
	 for(int i=0;i<size;i++)
	 {  
        printf("\nid:");
	 	scanf("%d",&ptr[i].id);
        printf("Name:");
	 	scanf("%s",ptr[i].name);
        printf("salary:");
	 	scanf("%d",&ptr[i].salary);
        printf("Allowance:");
	 	scanf("%d",&ptr[i].allowance);
	 }
}

void displayAdmin(Admin* ptr, int size)
{
	 for(int i=0;i<size;i++)
	 {
	 	printf("\nid:%d",ptr[i].id);
	 	printf("\nName:%s",ptr[i].name);
	 	printf("\nsalary:%d",ptr[i].salary);
        printf("\nAllowance:%d\n",ptr[i].allowance);
	 }
}	 

// void storeAdmin(Admin* ,int*);
// void displayAdmin(Admin* , int* );
// void show(Admin*);

// void main(){
//     int size;
//     printf("Enter the size:");
//     scanf("%d",&size);
//     Admin adarr[size];
//     printf("Enter employee details:");
// 	storeAdmin(adarr,&size);
//     printf("\nEmployee details is as follows\n");
// 	displayAdmin(adarr,&size);
//     int index;
//     printf("Showing details of Employee of index:");
//     scanf("%d",&index);
//     show(&adarr[index-1]);
// }

// void storeAdmin(Admin* ptr,int* size)
// {
	
// 	 for(int i=0;i<(*size);i++)
// 	 {  
//         printf("\nid:");
// 	 	scanf("%d",&ptr[i].id);
//         printf("Name:");
// 	 	scanf("%s",ptr[i].name);
//         printf("salary:");
// 	 	scanf("%d",&ptr[i].salary);
//         printf("Allowance:");
// 	 	scanf("%d",&ptr[i].allowance);
// 	 }
// }

// void displayAdmin(Admin* ptr, int* size)
// {
// 	 for(int i=0;i<(*size);i++)
// 	 {
// 	 	printf("\nid:%d",ptr[i].id);
// 	 	printf("\nName:%s",ptr[i].name);
// 	 	printf("\nsalary:%d",ptr[i].salary);
//         printf("\nAllowance:%d\n",ptr[i].allowance);
// 	 }
// }	 
// void show(Admin*adm){
//     printf("Id:%d\nName:%s\nSalary:%d\nAllowance:%d",adm->id,adm->name,adm->salary,adm->allowance);
// }
