#include <stdio.h>
typedef struct Dist{
    int feet;
    int inch;
}Dist;

// void storeDist(Dist* ,int );
// void displayDist(Dist* , int );

// void main(){
// Time tarr[3];
//     printf("Enter time:");
// 	storeDist(tarr,3);
//     printf("\nTimes are:\n");
// 	displayDist(tarr,3);
// }

// void storeDist(Time* ptr,int size)
// {
	
// 	 for(int i=0;i<size;i++)
// 	 {  
//         printf("\nFeet:");
// 	 	scanf("%d",&ptr[i].feet);
//         printf("Inch:");
// 	 	scanf("%d",&ptr[i].inch);
//         
// 	 }
// }

// void displayDist(Time* ptr, int size)
// {
// 	 for(int i=0;i<size;i++)
// 	 {
// 	 	printf("\n%d'%d\n",ptr[i].feet,ptr[i].inch);
// 	 }
	 
// }

void storeDist(Dist* ,int* );
void displayDist(Dist* , int* );
void show(Dist*);


void main(){
	int size;
    printf("Enter the size:");
    scanf("%d",&size);
    Dist tarr[size];
    printf("Enter distances:");
	storeDist(tarr,&size);
    printf("\nDistances are:\n");
	displayDist(tarr,&size);
	int index;
    printf("Distance of index:");
    scanf("%d",&index);
    show(&tarr[index-1]);
}

void storeDist(Dist* ptr,int* size)
{
	
	 for(int i=0;i<(*size);i++)
	 {  
        printf("\nFeet:");
	 	scanf("%d",&ptr[i].feet);
        printf("Inch:");
	 	scanf("%d",&ptr[i].inch);
        
	 }
}

void displayDist(Dist* ptr, int* size)
{
	 for(int i=0;i<(*size);i++)
	 {
	 	printf("\n%d'%d\n",ptr[i].feet,ptr[i].inch);
	 }
	 
}

void show(Dist* dist){
    printf("\n%d'%d\n",dist->feet,dist->inch);
}