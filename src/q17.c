// Write a function named calculatePower that takes two integers, base and exponent, as input and returns the result of raising the base to the exponent.

#include <stdio.h>
long long calculatePower(int base, int exponent) {
    long long result = 1;
    if (exponent == 0) {
        return 1;
    }
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}

int main() {
    int b, e;

    printf("Enter base: ");
    scanf("%d", &b);
    printf("Enter exponent: ");
    scanf("%d", &e);

    long long power = calculatePower(b, e);

    printf("%d raised to the power of %d is %lld\n", b, e, power);

    return 0;
}