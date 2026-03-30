// Write a recursive function named calculateFactorial that takes an integer n as input and returns its factorial.

#include <stdio.h>
long long calculateFactorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * calculateFactorial(n - 1);
}

int main() {
    int number = 5;
    printf("Factorial of %d is %lld\n", number, calculateFactorial(number));
    return 0;
}