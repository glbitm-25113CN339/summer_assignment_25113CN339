#include<stdio.h>
int main()
{
    int a, e;
    printf("Enter start and end: ");
    scanf("%d %d", &a, &e);
    for(int n = a; n <= e; n++)
    {
        int b = n, r, sum = 0;
        while(b > 0)
        {
            r= b % 10;
            sum = sum + r* r * r;
            b = b / 10;
        }
        if(sum == n)
            printf("%d ", n);
    }
    return 0;
}