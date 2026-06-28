#include <stdio.h>

struct Bank
{
    int accNo;
    char name[50];
    float balance;
};

struct Bank acc;
int created = 0;

void createAccount()
{
    printf("\nEnter Account Number: ");
    scanf("%d", &acc.accNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", acc.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &acc.balance);

    created = 1;
    printf("\nAccount Created Successfully!\n");
}

void deposit()
{
    float amount;

    if(created == 0)
    {
        printf("\nCreate an account first!\n");
        return;
    }

    printf("Enter Deposit Amount: ");
    scanf("%f", &amount);

    acc.balance += amount;

    printf("Amount Deposited Successfully!\n");
}

void withdraw()
{
    float amount;

    if(created == 0)
    {
        printf("\nCreate an account first!\n");
        return;
    }

    printf("Enter Withdraw Amount: ");
    scanf("%f", &amount);

    if(amount <= acc.balance)
    {
        acc.balance -= amount;
        printf("Amount Withdrawn Successfully!\n");
    }
    else
    {
        printf("Insufficient Balance!\n");
    }
}

void display()
{
    if(created == 0)
    {
        printf("\nCreate an account first!\n");
        return;
    }

    printf("\n------ Account Details ------\n");
    printf("Account Number : %d\n", acc.accNo);
    printf("Account Holder : %s\n", acc.name);
    printf("Balance        : %.2f\n", acc.balance);
}

int main()
{
    int choice;

    do
    {
        printf("\n===== Bank Account System =====\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Display Account\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                createAccount();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                display();
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