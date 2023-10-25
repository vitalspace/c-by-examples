#include <stdio.h>

int main() {
    // Define an integer array called array_numbers with initial values.
    int array_numbers[] = {1, 2, 3, 4, 5};
    
    // Calculate the length of the array by dividing the total size of the array
    // by the size of a single element (int).
    size_t len = sizeof(array_numbers) / sizeof(array_numbers[0]);
    
    // Print the size of the array.
    printf("The size of the array is %ld", len);
    
    return 0;
}