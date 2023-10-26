#include <stdio.h>
#include <stdlib.h>

// Function to convert an array of string representations to double using malloc.
double *convertToDoubleMalloc(char *arr[], int len) {
    // Allocate memory for an array of double values.
    double *result = (double *)malloc(sizeof(double) * len);
    
    // Check if memory allocation was successful.
    if (result == NULL) {
        exit(1);  // Exit the program with an error code if memory allocation fails.
    }

    // Convert each string to a double and store it in the result array.
    for (int i = 0; i < len; i++) {
        double number = atof(arr[i]);
        result[i] = number;
    }
    
    return result;
}

int main() {
    // Array of string representations of numbers.
    char *numbersArr[] = {"12.123", "1.233223", "234.333"};
    int len = sizeof(numbersArr) / sizeof(numbersArr[0]);  // Calculate the number of elements in the array.

    // Call the function to convert and allocate memory for double values.
    double *numbers = convertToDoubleMalloc(numbersArr, len);

    // Print the converted double values.
    for (int i = 0; i < len; i++) {
        printf("%lf\n", numbers[i]);
    }

    // Free the dynamically allocated memory to prevent memory leaks.
    free(numbers);

    return 0;  // Return 0 to indicate successful program execution.
}
