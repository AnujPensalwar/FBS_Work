#include <stdio.h>
typedef struct Time{
    int hour;
    int min;
    int sec;
}Time;

// void storeTime(Time* ,int );
// void displayTime(Time* , int );

// void main(){
// Time tarr[3];
//     printf("Enter time:");
// 	storeTime(tarr,3);
//     printf("\nTimes are:\n");
// 	displayTime(tarr,3);
// }

// void storeTime(Time* ptr,int size)
// {
	
// 	 for(int i=0;i<size;i++)
// 	 {  
//         printf("\nDay:");
// 	 	scanf("%d",&ptr[i].hour);
//         printf("Month:");
// 	 	scanf("%d",&ptr[i].min);
//         printf("Year:");
// 	 	scanf("%d",&ptr[i].sec);
// 	 }
// }

// void displayTime(Time* ptr, int size)
// {
// 	 for(int i=0;i<size;i++)
// 	 {
// 	 	printf("\n%d:%d:%d\n",ptr[i].hour,ptr[i].min,ptr[i].sec);
// 	 }
	 
// }

void storeTime(Time* ,int* );
void displayTime(Time* , int* );
void show(Time*);


void main(){
	int size;
    printf("Enter the size:");
    scanf("%d",&size);
    Time tarr[size];
    printf("Enter dates:");
	storeTime(tarr,&size);
    printf("\nDates are:\n");
	displayTime(tarr,&size);
	int index;
    printf("Time of index:");
    scanf("%d",&index);
    show(&tarr[index-1]);
}

void storeTime(Time* ptr,int* size)
{
	
	 for(int i=0;i<(*size);i++)
	 {  
        printf("\nHour:");
	 	scanf("%d",&ptr[i].hour);
        printf("Minute:");
	 	scanf("%d",&ptr[i].min);
        printf("Second:");
	 	scanf("%d",&ptr[i].sec);
	 }
}

void displayTime(Time* ptr, int* size)
{
	 for(int i=0;i<(*size);i++)
	 {
	 	printf("\n%d:%d:%d\n",ptr[i].hour,ptr[i].min,ptr[i].sec);
	 }
	 
}

void show(Time* date){
    printf("\n%d:%d:%d\n",date->hour,date->min,date->sec);
}