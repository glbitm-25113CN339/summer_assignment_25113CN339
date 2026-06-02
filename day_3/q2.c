#include <stdio.h>

int main() {
    int n, isPrime;

    printf("Enter the no: ");
    scanf("%d", &n);

    for(int i = 2; i <= n; i++) {
        isPrime = 1;

        for(int j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if(isPrime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}