#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;          // Size of the dynamic array.
    int *dynamicArray;  // Pointer to the dynamically allocated array.

    // Use calloc to allocate memory for an integer array with 'n' elements.
    dynamicArray = (int *)calloc(n, sizeof(int));

    // Check if the memory allocation was successful.
    if (dynamicArray == NULL) {
        exit(1);  // Exit the program with an error code.
        return 1; // Return an error code (this line is unreachable due to the exit).
    }

    // Assign values to the elements of the array.
    for (int i = 0; i < n; i++) {
        dynamicArray[i] = i + 1;
    }

    // Print the contents of the array.
    printf("Contents of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", dynamicArray[i]);
    }

    // Free the dynamically allocated memory to prevent memory leaks.
    free(dynamicArray);

    return 0; // Return 0 to indicate successful execution.
}
