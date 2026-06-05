#include <stdio.h>
int main()
{
    long long n, i, largestPrimeFactor = 1;
    printf("Enter a number: ");
    scanf("%lld", &n);
    while (n % 2 == 0)
    {
        largestPrimeFactor = 2;
        n = n / 2;
    }
    for (i = 3; i * i <= n; i += 2)
    {
        while (n % i == 0)
        {
            largestPrimeFactor = i;
            n = n / i;
        }
    }
    if (n > 2)
        largestPrimeFactor = n;
    printf("Largest Prime Factor = %lld", largestPrimeFactor);
    return 0;
}