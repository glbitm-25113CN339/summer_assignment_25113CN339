#include <stdio.h>
#include <string.h>

struct Ticket
{
    int ticketNo;
    char name[50];
    int seats;
};

struct Ticket t;
int booked = 0;

void bookTicket()
{
    if(booked)
    {
        printf("\nTicket is already booked!\n");
        return;
    }

    printf("\nEnter Ticket Number: ");
    scanf("%d", &t.ticketNo);

    printf("Enter Passenger Name: ");
    scanf(" %[^\n]", t.name);

    printf("Enter Number of Seats: ");
    scanf("%d", &t.seats);

    booked = 1;

    printf("\nTicket Booked Successfully!\n");
}

void displayTicket()
{
    if(!booked)
    {
        printf("\nNo Ticket Booked!\n");
        return;
    }

    printf("\n------ Ticket Details ------\n");
    printf("Ticket Number : %d\n", t.ticketNo);
    printf("Passenger Name: %s\n", t.name);
    printf("Seats         : %d\n", t.seats);
}

void cancelTicket()
{
    if(!booked)
    {
        printf("\nNo Ticket Found!\n");
        return;
    }

    booked = 0;
    printf("\nTicket Cancelled Successfully!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. Display Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                bookTicket();
                break;

            case 2:
                displayTicket();
                break;

            case 3:
                cancelTicket();
                break;

            case 4:
                printf("\nThank You!\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}