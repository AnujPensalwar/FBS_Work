#include <stdio.h>
typedef struct Date{
    int day;
    int month;
    int year;
}Date;

// void storeDate(Date* ,int );
// void displayDate(Date* , int );

// void main(){
// Date darr[3];
//     printf("Enter dates:");
// 	storeDate(darr,3);
//     printf("\nDates are:\n");
// 	displayDate(darr,3);
// }

// void storeDate(Date* ptr,int size)
// {
	
// 	 for(int i=0;i<size;i++)
// 	 {  
//         printf("\nDay:");
// 	 	scanf("%d",&ptr[i].day);
//         printf("Month:");
// 	 	scanf("%d",&ptr[i].month);
//         printf("Year:");
// 	 	scanf("%d",&ptr[i].year);
// 	 }
// }

// void displayDate(Date* ptr, int size)
// {
// 	 for(int i=0;i<size;i++)
// 	 {
// 	 	printf("\n%d/%d/%d\n",ptr[i].day,ptr[i].month,ptr[i].year);
// 	 }
	 
// }

void storeDate(Date* ,int* );
void displayDate(Date* , int* );
void show(Date*);


void main(){
	int size;
    printf("Enter the size:");
    scanf("%d",&size);
    Date darr[size];
    printf("Enter dates:");
	storeDate(darr,&size);
    printf("\nDates are:\n");
	displayDate(darr,&size);
	int index;
    printf("Date of index:");
    scanf("%d",&index);
    show(&darr[index-1]);
}

void storeDate(Date* ptr,int* size)
{
	
	 for(int i=0;i<(*size);i++)
	 {  
        printf("\nDay:");
	 	scanf("%d",&ptr[i].day);
        printf("Month:");
	 	scanf("%d",&ptr[i].month);
        printf("Year:");
	 	scanf("%d",&ptr[i].year);
	 }
}

void displayDate(Date* ptr, int* size)
{
	 for(int i=0;i<(*size);i++)
	 {
	 	printf("\n%d/%d/%d\n",ptr[i].day,ptr[i].month,ptr[i].year);
	 }
	 
}

void show(Date* date){
    printf("\n%d/%d/%d\n",date->day,date->month,date->year);
}