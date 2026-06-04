#include<stdio.h>
int main()
{
    int n, b, r, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    b = n;
    while(b > 0)
    {
        r = b % 10;
        sum = sum + (r * r * r);
        b = b / 10;
    }
    if(sum == n)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}