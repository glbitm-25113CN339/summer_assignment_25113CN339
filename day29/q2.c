#include <stdio.h>

int main()
{
    int arr[100], n, i, choice, sum = 0, max;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\n1. Display\n2. Sum\n3. Largest\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            for(i = 0; i < n; i++)
                printf("%d ", arr[i]);
            break;

        case 2:
            for(i = 0; i < n; i++)
                sum += arr[i];
            printf("Sum = %d", sum);
            break;

        case 3:
            max = arr[0];
            for(i = 1; i < n; i++)
                if(arr[i] > max)
                    max = arr[i];
            printf("Largest = %d", max);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}