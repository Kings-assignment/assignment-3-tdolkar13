// Write a recursive function named calculateFibonacci that takes an integer n as input and returns the nth Fibonacci number. The Fibonacci sequence starts with 0 and 1, and each subsequent number is the sum of the two preceding numbers.

#include <stdio.h>
long long memo[100]; 

long long calculateFibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    if (memo[n] != 0) {
        return memo[n];
    }
    memo[n] = calculateFibonacci(n - 1) + calculateFibonacci(n - 2);
    return memo[n];
}
int main() {
    int n = 50; 
    printf("The %dth Fibonacci number is: %lld\n", n, calculateFibonacci(n));
    return 0;
}