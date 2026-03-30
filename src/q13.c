// Write a function named findFactorial that takes an integer as input and returns its factorial.
#include <stdio.h>
long long findFactorial(int n) {
    if (n < 0) {
        return -1; 
    }

    long long factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    return factorial;
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    long long result = findFactorial(num);

    if (result == -1) {
        printf("Factorial of negative numbers is undefined.\n");
    } else {
        printf("Factorial of %d is %lld\n", num, result);
    }

    return 0;
}