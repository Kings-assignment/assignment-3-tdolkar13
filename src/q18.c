// Write a function named findPrimeNumbers that takes an integer n as input and prints all prime numbers from 1 to n.

#include <stdio.h>
void findPrimeNumbers(int n) {
    for (int num = 2; num <= n; num++) {
        int isPrime = 1;
        
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        
        if (isPrime) {
            printf("%d ", num);
        }
    }
    printf("\n");
}
int main() {
    int limit;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    
    printf("Prime numbers up to %d are: ", limit);
    findPrimeNumbers(limit);
    
    return 0;
} 