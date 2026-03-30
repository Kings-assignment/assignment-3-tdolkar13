// Write a C program to find the maximum and minimum elements in an array.
#include <stdio.h>

int main() {
    int arr[] = {12, 45, 2, 67, 34, 89, 5, 23};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int max = arr[0];
    int min = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        } else if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    printf("Array elements: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    
    printf("\n\nMaximum element: %d", max);
    printf("\nMinimum element: %d\n", min);
    
    return 0;
}