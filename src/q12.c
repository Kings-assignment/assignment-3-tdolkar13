//  Write a function named isPalindrome that takes a string as input and returns 1 if it is a palindrome (reads the same forwards and backwards), and 0 otherwise.

#include <stdio.h>
int isPalindrome(char str[]) {
    int length = 0;
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char input[100];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    if (isPalindrome(input)) {
        printf("1 (It is a palindrome)\n");
    } else {
        printf("0 (It is not a palindrome)\n");
    }

    return 0;
}