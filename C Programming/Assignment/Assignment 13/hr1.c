#include <stdio.h>
typedef struct Hr{
    int id;
    char name[20];
    int salary;
    int commission;
}Hr;


// void storeHr(Hr*,int);
// void displayHr(Hr*, int);

// void main(){
//     Hr hrarr[3];
//     printf("Enter employee details:");
// 	storeHr(hrarr,3);
//     printf("\nEmployee details is as follows\n");
// 	displayHr(hrarr,3);
// }

// void storeHr(Hr* ptr,int size)
// {
// 	 for(int i=0;i<size;i++)
// 	 {  
//         printf("\nid:");
// 	 	scanf("%d",&ptr[i].id);
//         printf("Name:");
// 	 	scanf("%s",ptr[i].name);
//         printf("salary:");
// 	 	scanf("%d",&ptr[i].salary);
//         printf("commission:");
// 	 	scanf("%d",&ptr[i].commission);
// 	 }
// }

// void displayHr(Hr* ptr, int size)
// {
// 	 for(int i=0;i<size;i++)
// 	 {
// 	 	printf("\nid:%d",ptr[i].id);
// 	 	printf("\nName:%s",ptr[i].name);
// 	 	printf("\nsalary:%d",ptr[i].salary);
//         printf("\ncommission:%d\n",ptr[i].commission);
// 	 }
// }	 

void storeHr(Hr* ,int*);
void displayHr(Hr* , int* );
void show(Hr*);

void main(){
    int size;
    printf("Enter the size:");
    scanf("%d",&size);
    Hr hrarr[size];
    printf("Enter employee details:");
	storeHr(hrarr,&size);
    printf("\nEmployee details is as follows\n");
	displayHr(hrarr,&size);
    int index;
    printf("Showing details of Employee of index:");
    scanf("%d",&index);
    show(&hrarr[index-1]);
}

void storeHr(Hr* ptr,int* size)
{
	
	 for(int i=0;i<(*size);i++)
	 {  
        printf("\nid:");
	 	scanf("%d",&ptr[i].id);
        printf("Name:");
	 	scanf("%s",ptr[i].name);
        printf("salary:");
	 	scanf("%d",&ptr[i].salary);
        printf("commission:");
	 	scanf("%d",&ptr[i].commission);
	 }
}

void displayHr(Hr* ptr, int* size)
{
	 for(int i=0;i<(*size);i++)
	 {
	 	printf("\nid:%d",ptr[i].id);
	 	printf("\nName:%s",ptr[i].name);
	 	printf("\nsalary:%d",ptr[i].salary);
        printf("\ncommission:%d\n",ptr[i].commission);
	 }
}	 
void show(Hr*adm){
    printf("Id:%d\nName:%s\nSalary:%d\ncommission:%d",adm->id,adm->name,adm->salary,adm->commission);
}
