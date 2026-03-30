// Write a recursive function named calculateSumOfDigits that takes an integer n as input and returns the sum of its digits.

#include <stdio.h>
int calculateSumOfDigits(int n) {
    if (n == 0) {
        return 0;
    }

    return (n % 10) + calculateSumOfDigits(n / 10);
}

int main() {
    int num = 1234;
    printf("Sum of digits of %d is %d\n", num, calculateSumOfDigits(num));
    return 0;
}