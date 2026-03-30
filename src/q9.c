// Implement a C program to count the occurrence of a specific character in a string.
#include <stdio.h>
int main() {
    char str[100];
    char target;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to search for: ");
    scanf("%c", &target);

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] == target) {
            count++;
        }
    }

    printf("The character '%c' appears %d times.\n", target, count);

    return 0;
}