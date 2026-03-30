//  Write a recursive function named countOccurrences that takes a string and a character as input and returns the number of times the character appears in the string.

#include <stdio.h>
int countOccurrences(char *str, char target) {
   
    if (*str == '\0') {
        return 0;
    }
    if (*str == target) {

        return 1 + countOccurrences(str + 1, target);
    } else {
        return countOccurrences(str + 1, target);
    }
}
int main() {
    char myString[] = "banana";
    char searchChar = 'a';
    
    int result = countOccurrences(myString, searchChar);
    
    printf("The character '%c' appears %d times in \"%s\".\n", 
            searchChar, result, myString);
            
    return 0;
}