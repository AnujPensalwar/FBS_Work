#include <stdio.h>
typedef struct Employee{
    int id;
    char name[20];
    int salary;
}Employee;


// void storeEmp(Employee* ,int );
// void displayEmp(Employee* , int );
// void main(){
//     Employee earr[3];
//     printf("Enter employee details:");
// 	storeEmp(earr,3);
//     printf("\nEmployee details is as follows\n");
// 	 displayEmp(earr,3);
// }

// void storeEmp(Employee* ptr,int size)
// {
	
// 	 for(int i=0;i<size;i++)
// 	 {  
//         printf("\nid:");
// 	 	scanf("%d",&ptr[i].id);
//         printf("Name:");
// 	 	scanf("%s",ptr[i].name);
//         printf("salary:");
// 	 	scanf("%d",&ptr[i].salary);
// 	 }
// }

// void displayEmp(Employee* ptr, int size)
// {
// 	 for(int i=0;i<size;i++)
// 	 {
// 	 	printf("\nid:%d",ptr[i].id);
// 	 	printf("\nName:%s",ptr[i].name);
// 	 	printf("\nsalary:%d\n",ptr[i].salary);
// 	 }
	 
//  }

void storeEmp(Employee* ,int*);
void displayEmp(Employee* , int* );
void show(Employee*);
void main(){
    int size;
    printf("Enter the size:");
    scanf("%d",&size);
    Employee earr[size];
    printf("Enter employee details:");
	storeEmp(earr,&size);
    printf("\nEmployee details is as follows\n");
	displayEmp(earr,&size);
    int index;
    printf("Showing details of Employee of index:");
    scanf("%d",&index);
    show(&earr[index-1]);
}

void storeEmp(Employee* ptr,int* size)
{
	
	 for(int i=0;i<(*size);i++)
	 {  
        printf("\nid:");
	 	scanf("%d",&ptr[i].id);
        printf("Name:");
	 	scanf("%s",ptr[i].name);
        printf("salary:");
	 	scanf("%d",&ptr[i].salary);
	 }
}

void displayEmp(Employee* ptr, int* size)
{
	 for(int i=0;i<(*size);i++)
	 {
	 	printf("\nid:%d",ptr[i].id);
	 	printf("\nName:%s",ptr[i].name);
	 	printf("\nsalary:%d\n",ptr[i].salary);
	 }
	 
}

void show(Employee*emp){
    printf("Id:%d\nName:%s\nSalary:%d",emp->id,emp->name,emp->salary);
}
