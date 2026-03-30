//  Write a function named calculateFactorialSeries that takes an integer n as input and prints the factorial series up to n.

#include <stdio.h>
void calculateFactorialSeries(int n) {
    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return;
    }

    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
        printf("%d! = %lld\n", i, fact);
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Factorial series up to %d:\n", n);
    calculateFactorialSeries(n);

    return 0;
}