// Write a function named calculateGCD that takes two integers as input and returns their greatest common divisor (GCD).

#include <stdio.h>
int calculateGCD(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1 = 48, num2 = 18;
    printf("The GCD of %d and %d is: %d\n", num1, num2, calculateGCD(num1, num2));
    return 0;
}