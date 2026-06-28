#include <stdio.h>
#include <string.h>

struct Library
{
    int id;
    char name[50];
    char author[50];
};

struct Library book[100];
int count = 0;

void addBook()
{
    printf("\nEnter Book ID: ");
    scanf("%d", &book[count].id);

    printf("Enter Book Name: ");
    scanf(" %[^\n]", book[count].name);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", book[count].author);

    count++;
    printf("\nBook Added Successfully!\n");
}

void displayBooks()
{
    if(count == 0)
    {
        printf("\nNo Books Available!\n");
        return;
    }

    printf("\n----- Book List -----\n");

    for(int i = 0; i < count; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Book ID : %d\n", book[i].id);
        printf("Book Name : %s\n", book[i].name);
        printf("Author : %s\n", book[i].author);
    }
}

void searchBook()
{
    int id, found = 0;

    printf("\nEnter Book ID to Search: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(book[i].id == id)
        {
            printf("\nBook Found!\n");
            printf("Book ID : %d\n", book[i].id);
            printf("Book Name : %s\n", book[i].name);
            printf("Author : %s\n", book[i].author);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("\nBook Not Found!\n");
}

void deleteBook()
{
    int id, found = 0;

    printf("\nEnter Book ID to Delete: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(book[i].id == id)
        {
            for(int j = i; j < count - 1; j++)
            {
                book[j] = book[j + 1];
            }

            count--;
            found = 1;
            printf("\nBook Deleted Successfully!\n");
            break;
        }
    }

    if(found == 0)
        printf("\nBook Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Delete Book\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addBook();
                break;

            case 2:
                displayBooks();
                break;

            case 3:
                searchBook();
                break;

            case 4:
                deleteBook();
                break;

            case 5:
                printf("\nThank You!\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}