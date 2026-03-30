// Implement a C program to reverse a string.
#include <stdio.h>
int main() {
    char str[100];
    int start = 0, end = 0;
    char temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[end] != '\0' && str[end] != '\n') {
        end++;
    }
    end--; 
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}