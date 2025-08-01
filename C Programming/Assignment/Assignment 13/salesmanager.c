#include <stdio.h>
typedef struct SalesManager{
    int id;
    char name[20];
    int salary;
    int incentive;
    int target;
}SalesManager;


void storeSalesManager(SalesManager*,int);
void displaySalesManager(SalesManager*, int);

void main(){
    SalesManager smarr[3];
    printf("Enter employee details:");
	storeSalesManager(smarr,3);
    printf("\nEmployee details is as follows\n");
	displaySalesManager(smarr,3);
}

void storeSalesManager(SalesManager* ptr,int size)
{
	 for(int i=0;i<size;i++)
	 {  
        printf("\nid:");
	 	scanf("%d",&ptr[i].id);
        printf("Name:");
	 	scanf("%s",ptr[i].name);
        printf("salary:");
	 	scanf("%d",&ptr[i].salary);
        printf("incentive:");
	 	scanf("%d",&ptr[i].incentive);
        printf("target:");
	 	scanf("%d",&ptr[i].target);
	 }
}

void displaySalesManager(SalesManager* ptr, int size)
{
	 for(int i=0;i<size;i++)
	 {
	 	printf("\nid:%d",ptr[i].id);
	 	printf("\nName:%s",ptr[i].name);
	 	printf("\nsalary:%d",ptr[i].salary);
        printf("\nincentive:%d\n",ptr[i].incentive);
	 }
}	 

// void storeSalesManager(SalesManager* ,int*);
// void displaySalesManager(SalesManager* , int* );
// void show(SalesManager*);

// void main(){
//     int size;
//     printf("Enter the size:");
//     scanf("%d",&size);
//     SalesManager smarr[size];
//     printf("Enter employee details:");
// 	storeSalesManager(smarr,&size);
//     printf("\nEmployee details is as follows\n");
// 	displaySalesManager(smarr,&size);
//     int index;
//     printf("Showing details of Employee of index:");
//     scanf("%d",&index);
//     show(&smarr[index-1]);
// }

// void storeSalesManager(SalesManager* ptr,int* size)
// {
	
// 	 for(int i=0;i<(*size);i++)
// 	 {  
//         printf("\nid:");
// 	 	scanf("%d",&ptr[i].id);
//         printf("Name:");
// 	 	scanf("%s",ptr[i].name);
//         printf("salary:");
// 	 	scanf("%d",&ptr[i].salary);
//         printf("incentive:");
// 	 	scanf("%d",&ptr[i].incentive);
//         printf("target:");
// 	 	scanf("%d",&ptr[i].target);
// 	 }
// }

// void displaySalesManager(SalesManager* ptr, int* size)
// {
// 	 for(int i=0;i<(*size);i++)
// 	 {
// 	 	printf("\nid:%d",ptr[i].id);
// 	 	printf("\nName:%s",ptr[i].name);
// 	 	printf("\nsalary:%d",ptr[i].salary);
//         printf("\ncommission:%d\n",ptr[i].incentive);
//         printf("\ntarget:%d\n",ptr[i].target);
// 	 }
// }	 
// void show(SalesManager*sm){
//     printf("Id:%d\nName:%s\nSalary:%d\nincentive:%d",sm->id,sm->name,sm->salary,sm->incentive,sm->target);
// }
