#include <stdio.h>
typedef struct Student{
    int rollno;
    char name[20];
    int marks;
}Student;

// void storeStudents(Student* ,int );
// void displayStudents(Student* , int );
// void main(){
//     Student sarr[3];
//     printf("Enter student details:");
// 	storeStudents(sarr,3);
//     printf("\nStudent details is as follows\n");
// 	 displayStudents(sarr,3);
// }

// void storeStudents(Student* ptr,int size)
// {
	
// 	 for(int i=0;i<size;i++)
// 	 {  
//         printf("\nRoll no.:");
// 	 	scanf("%d",&ptr[i].rollno);
//         printf("Name:");
// 	 	scanf("%s",ptr[i].name);
//         printf("Marks:");
// 	 	scanf("%d",&ptr[i].marks);
// 	 }
// }

// void displayStudents(Student* ptr, int size)
// {
// 	 for(int i=0;i<size;i++)
// 	 {
// 	 	printf("\nRoll no.:%d",ptr[i].rollno);
// 	 	printf("\nName:%s",ptr[i].name);
// 	 	printf("\nMarks:%d\n",ptr[i].marks);
// 	 }
	 
// }
void storeStudents(Student* ,int* );
void displayStudents(Student* , int* );
void show(Student* );
void main(){
    int size;
    printf("Enter the size:");
    scanf("%d",&size);
    Student sarr[size];
    printf("Enter student details:");
	storeStudents(sarr,&size);
    printf("\nStudent details is as follows\n");
	displayStudents(sarr,&size);

    int index;
    printf("Showing details of student of index:");
    scanf("%d",&index);
    show(&sarr[index-1]);
}

void storeStudents(Student* ptr,int* size)
{
	
	 for(int i=0;i<(*size);i++)
	 {  
        printf("\nRoll no.:");
	 	scanf("%d",&ptr[i].rollno);
        printf("Name:");
	 	scanf("%s",ptr[i].name);
        printf("Marks:");
	 	scanf("%d",&ptr[i].marks);
	 }
}

void displayStudents(Student* ptr, int* size)
{
	 for(int i=0;i<(*size);i++)
	 {
	 	printf("\nRoll no.:%d",ptr[i].rollno);
	 	printf("\nName:%s",ptr[i].name);
	 	printf("\nMarks:%d\n",ptr[i].marks);
	 }
	 
}

void show(Student* std){
    printf("Roll no.:%d\nName:%s\nMarks:%d",std->rollno,std->name,std->marks);
}