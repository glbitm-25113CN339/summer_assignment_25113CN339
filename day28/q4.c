#include <stdio.h>
#include <string.h>

struct Contact
{
    char name[50];
    char phone[15];
};

struct Contact c;
int saved = 0;

void addContact()
{
    printf("\nEnter Contact Name: ");
    scanf(" %[^\n]", c.name);

    printf("Enter Phone Number: ");
    scanf("%s", c.phone);

    saved = 1;
    printf("\nContact Saved Successfully!\n");
}

void displayContact()
{
    if(saved == 0)
    {
        printf("\nNo Contact Found!\n");
        return;
    }

    printf("\n------ Contact Details ------\n");
    printf("Name  : %s\n", c.name);
    printf("Phone : %s\n", c.phone);
}

void searchContact()
{
    char search[50];

    if(saved == 0)
    {
        printf("\nNo Contact Found!\n");
        return;
    }

    printf("\nEnter Contact Name to Search: ");
    scanf(" %[^\n]", search);

    if(strcmp(search, c.name) == 0)
    {
        printf("\nContact Found!\n");
        printf("Name  : %s\n", c.name);
        printf("Phone : %s\n", c.phone);
    }
    else
    {
        printf("\nContact Not Found!\n");
    }
}

void deleteContact()
{
    if(saved == 0)
    {
        printf("\nNo Contact Found!\n");
        return;
    }

    saved = 0;
    printf("\nContact Deleted Successfully!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contact\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addContact();
                break;

            case 2:
                displayContact();
                break;

            case 3:
                searchContact();
                break;

            case 4:
                deleteContact();
                break;

            case 5:
                printf("\nThank You!\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}#include <stdio.h>
#include <string.h>

struct Contact
{
    char name[50];
    char phone[15];
};

struct Contact c;
int saved = 0;

void addContact()
{
    printf("\nEnter Contact Name: ");
    scanf(" %[^\n]", c.name);

    printf("Enter Phone Number: ");
    scanf("%s", c.phone);

    saved = 1;
    printf("\nContact Saved Successfully!\n");
}

void displayContact()
{
    if(saved == 0)
    {
        printf("\nNo Contact Found!\n");
        return;
    }

    printf("\n------ Contact Details ------\n");
    printf("Name  : %s\n", c.name);
    printf("Phone : %s\n", c.phone);
}

void searchContact()
{
    char search[50];

    if(saved == 0)
    {
        printf("\nNo Contact Found!\n");
        return;
    }

    printf("\nEnter Contact Name to Search: ");
    scanf(" %[^\n]", search);

    if(strcmp(search, c.name) == 0)
    {
        printf("\nContact Found!\n");
        printf("Name  : %s\n", c.name);
        printf("Phone : %s\n", c.phone);
    }
    else
    {
        printf("\nContact Not Found!\n");
    }
}

void deleteContact()
{
    if(saved == 0)
    {
        printf("\nNo Contact Found!\n");
        return;
    }

    saved = 0;
    printf("\nContact Deleted Successfully!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contact\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addContact();
                break;

            case 2:
                displayContact();
                break;

            case 3:
                searchContact();
                break;

            case 4:
                deleteContact();
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