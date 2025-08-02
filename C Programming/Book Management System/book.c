#include<stdio.h>
#include<string.h>

struct books {
    int BookID;
    char Name[100];
    char AuthorName[100];
    char category[100];
    double price;
    double rating;
};

struct books Library[100];
int count=0;

void addbook();
void RemoveBook();
void displayBook();
void searchBook();
void showAuthorBook();
void showCategoryBooks();
void UpdateBook();

int main() {
    int choice;

    while(1) {
        printf("\nMenu:\n");
        printf("1.Add Book\n");
        printf("2.Search Book\n");
        printf("3.Remove Book\n");
        printf("4.Show Author's Books\n");
        printf("5.Show Category's Books\n");
        printf("6.Update Book Data\n");
        printf("7.Display All Books\n");
        printf("8.Exit\n");

        printf("Enter the Choice: ");
        scanf("%d",&choice);

        if(choice==1) {
            addbook();
        }
		else if(choice==2){
			searchBook();
		}
		else if(choice==3){
			RemoveBook();
		}
		else if(choice==4){
			showAuthorBook();
		}
		else if(choice==5){
			showCategoryBooks();
		}
		else if(choice==6){
			UpdateBook();
		}
		 else if(choice==7){
            displayBook();
        } 
		 else if(choice==8){
            return 0;
        }
		 else {
            printf("invalid Option\n");
        }
    }

    return 0;
}


void addbook() {
    if (count>=100) {
        printf("Library is full\n");
        return;
    }

    printf("Enter the Book ID: ");
    scanf("%d",&Library[count].BookID);

    printf("Enter the Book Name: ");
    scanf("%s",Library[count].Name);

    printf("Enter the Author Name: ");
    scanf("%s",Library[count].AuthorName);

    printf("Enter the Category: ");
    scanf("%s",Library[count].category);

    printf("Enter the Price of Book: ");
    scanf("%lf",&Library[count].price);

    printf("Enter the Book Rating: ");
    scanf("%lf",&Library[count].rating);

    count++;
    printf("Book added successfully\n");
}


void RemoveBook(){
	int id;
	printf("Enter Book ID: ");
	scanf("%d",&id);
    for (int i=0;i<count;i++) {
        if (Library[i].BookID==id) {
            for (int j=i;j<count-1;j++) {
                Library[j]=Library[j+1];
            }
            count--;
            printf("Book with ID %d removed successfully\n",id);
            return;
        }
    }
     printf("No books found\n");
}



void displayBook() {
    if (count==0) {
        printf("No books available\n");
        return;
    }

    for (int i=0;i<count;i++) {
        printf("\nID:%d\nName:%s\nAuthor:%s\nCategory:%s\nPrice:%lf\nRating:%lf\n",
               Library[i].BookID,Library[i].Name,Library[i].AuthorName,Library[i].category, Library[i].price,
               Library[i].rating);
    }
}


void searchBook(){
	int id;
	printf("Enter Book ID: ");
	scanf("%d",&id);
    for (int i=0;i<count;i++){
        if (Library[i].BookID==id){
           printf("\nID:%d\nName:%s\nAuthor:%s\nCategory:%s\nPrice:%lf\nRating:%lf\n",
               Library[i].BookID,Library[i].Name,Library[i].AuthorName,Library[i].category, Library[i].price,
               Library[i].rating);
        }
       else
         printf("Book with ID %d not found\n",id);
    }

}


void showAuthorBook(){
    char Name[20];
    
    printf("Enter Author's Name:");
    scanf("%s",Name);
    for (int i=0;i<count;i++) {
        if (strcmp(Library[i].AuthorName,Name)==0) {
           printf("\nID:%d\nName:%s\nAuthor:%s\nCategory:%s\nPrice:%lf\nRating:%lf\n",
               Library[i].BookID,Library[i].Name,Library[i].AuthorName,Library[i].category, Library[i].price,
               Library[i].rating);
        }
        else
        printf("No books found by author:%s\n",Name);
        }
    }
    
    
void showCategoryBooks(){
    char category[20];
    
    printf("Enter category Name:");
    scanf("%s",category);
    for (int i=0;i<count;i++) {
        if (strcmp(Library[i].category,category)==0) {
           printf("\nID:%d\nName:%s\nAuthor:%s\nCategory:%s\nPrice:%lf\nRating:%lf\n",
               Library[i].BookID,Library[i].Name,Library[i].AuthorName,Library[i].category, Library[i].price,
               Library[i].rating);
        }
        else
        printf("No books found for:%s\n",category);
        }
    }  
	
	
void UpdateBook(){
	int id;
	printf("Enter Book ID to update: ");
            scanf("%d",&id);
        for(int i=0;i<count;i++) {
           if (Library[i].BookID==id) {
        	
         printf("Enter new details\n");

         printf("Enter the Book ID: ");
         scanf("%d",&Library[i].BookID);

         printf("Enter the Book Name: ");
         scanf("%s",Library[i].Name);

         printf("Enter the Author Name: ");
         scanf("%s",Library[i].AuthorName);

         printf("Enter the Category: ");
         scanf("%s",Library[i].category);

         printf("Enter the Price of Book: ");
         scanf("%lf",&Library[i].price);

         printf("Enter the Book Rating: ");
         scanf("%lf",&Library[i].rating);
         
         printf("\nBook updated successfully\n");
         return;
     }
    
 }
     printf("No books found\n");
 
}





