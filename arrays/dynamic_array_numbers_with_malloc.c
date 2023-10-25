#include <stdio.h>
#include <stdlib.h>

// Function to create an array of integers from 1 to n
int *getArrayOfNumbers(size_t n) {
    // Allocate memory for an array of integers, size is determined by n
    int *result = (int *)malloc(sizeof(int) * n);
    
    // Check if memory allocation was successful
    if (result == NULL) {
        exit(1); // Terminate the program with an error code if allocation failed
    }

    // Fill the array with consecutive integers from 1 to n
    for (size_t i = 0; i < n; i++) {
        result[i] = i + 1;
    }

    return result; // Return the pointer to the created array
}

int main() {
    size_t n = 1000000; // Number of elements in the array
    int *numbers = getArrayOfNumbers(n); // Call the function to obtain the array

    // Print the numbers in the array
    for (size_t i = 0; i < n; i++) {
        printf("%d\n", numbers[i]);
    }

    free(numbers); // Free dynamically allocated memory

    return 0; // Exit the program with a success code
}