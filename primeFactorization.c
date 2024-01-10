#include <stdio.h>

void primeFactorization(int num, int divisor) {
    if (num <= 1) {
        return;
    }

    if (num % divisor == 0) {
        printf("%d ", divisor);
        primeFactorization(num / divisor, divisor);
    } else {
        primeFactorization(num, divisor + 1);
    }
}

int main() {
    int num1, num2;

    // Get two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Prime factorization of %d: ", num1);
    primeFactorization(num1, 3);

    printf("\nPrime factorization of %d: ", num2);
    primeFactorization(num2, 5);

    return 0;
}
