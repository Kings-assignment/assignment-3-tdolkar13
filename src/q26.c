// Write a recursive function named reverseString that takes a string as input and returns the reversed string.

#include <stdio.h>
#include <string.h>
void reverseString(char *str) {

    if (*str == '\0') {
        return;
    }
    reverseString(str + 1);
    printf("%c", *str);
}

int main() {
    char str[] = "Hello World";
    printf("Original: %s\n", str);
    printf("Reversed: ");
    reverseString(str);
    printf("\n");
    return 0;
}