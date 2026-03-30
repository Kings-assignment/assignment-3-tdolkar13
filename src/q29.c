// Write a recursive function named isPalindrome that takes a string as input and returns 1 if it is a palindrome (reads the same forwards and backwards), and 0 otherwise

#include <stdio.h>
#include <string.h>
int checkPalindrome(char *str, int left, int right) {
    if (left >= right) {
        return 1;
    }
    
    if (str[left] != str[right]) {
        return 0;
    }

    return checkPalindrome(str, left + 1, right - 1);
}

int isPalindrome(char *str) {
    int len = strlen(str);
    if (len == 0) return 1;
    return checkPalindrome(str, 0, len - 1);
}

int main() {
    char str[] = "radar";
    if (isPalindrome(str)) {
        printf("'%s' is a palindrome.\n", str);
    } else {
        printf("'%s' is not a palindrome.\n", str);
    }
    return 0;
}