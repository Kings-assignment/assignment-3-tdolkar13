// Write a recursive function named calculateBinary that takes an integer n as input and returns its binary representation as a string.

#include <stdio.h>
#include <string.h>
void convertToBinary(int n, char *buffer, int *index) {
    
    if (n > 1) {
        convertToBinary(n / 2, buffer, index);
    }

    buffer[(*index)++] = (n % 2) + '0';
    buffer[*index] = '\0'; 
}

int main() {
    int n = 13;
    char binaryString[33]; 
    int index = 0;

    if (n == 0) {
        strcpy(binaryString, "0");
    } else {
        convertToBinary(n, binaryString, &index);
    }

    printf("Decimal: %d\nBinary: %s\n", n, binaryString);
    return 0;
}