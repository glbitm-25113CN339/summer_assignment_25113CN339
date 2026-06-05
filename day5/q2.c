#include <stdio.h>
int main()
{
    int n, t, r, sum = 0, fact, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    t = n;
    while(t > 0)
    {
        r = t % 10;
        fact = 1;
        for(i = 1; i <= r; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        t = t / 10;
    }
    if(sum == n)
        printf("%d is a Strong Number", n);
    else
        printf("%d is not a Strong Number", n);

    return 0;
}