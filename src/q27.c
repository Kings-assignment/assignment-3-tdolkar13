// Write a recursive function named printTriangle that takes an integer n as input and prints a triangle of asterisks (*) with n rows.

#include <stdio.h>
void printRow(int m) {
    if (m == 0) {
        return;
    }
    printf("* ");
    printRow(m - 1);
}
void printTriangle(int n) {
  
    if (n <= 0) {
        return;
    }
    printTriangle(n - 1);
    printRow(n);
    printf("\n");
}

int main() {
    int rows = 5;
    printTriangle(rows);
    return 0;
}