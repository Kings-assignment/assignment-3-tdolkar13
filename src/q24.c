// Write a recursive function named calculatePower that takes two integers base and exponent as input and returns the result of raising the base to the exponent.

#include <stdio.h>
long long calculatePower(int base, int exponent) {

    if (exponent == 0) {
        return 1;
    }

    return base * calculatePower(base, exponent - 1);
}

int main() {
    int b = 2, e = 10;
    printf("%d raised to the power of %d is %lld\n", b, e, calculatePower(b, e));
    return 0;
}