// Write a function named countOccurrences that takes a string and a character as input and returns the number of times the character appears in the string.

#include <stdio.h>
int countOccurrences(char str[], char target) {
    int count = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            count++;
        }
    }
    
    return count;
}

int main() {
    char text[] = "programming in c is fun!";
    char search = 'n';
    
    int result = countOccurrences(text, search);
    
    printf("The character '%c' appears %d times in the string.\n", search, result);
    
    return 0;
}