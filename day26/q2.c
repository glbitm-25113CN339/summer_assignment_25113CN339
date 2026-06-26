#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
        printf("Eligible for Voting.\n");
    else
        printf("Not Eligible for Voting.\n");

    return 0;
}