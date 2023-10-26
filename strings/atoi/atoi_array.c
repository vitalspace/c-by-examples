#include <stdio.h>
#include <stdlib.h>

// Function to convert an array of string representations to integers and print them.
void convertToInteger(char *arr[], int len) {
    for (int i = 0; i < len; i++) {
        int number = atoi(arr[i]);  // Convert the string to an integer using atoi.
        printf("%d\n", number);     // Print the converted integer.
    }
}

int main() {
    // Array of string representations of integers.
    char *numbers[] = {"123124", "93845", "034950"};
    int len = sizeof(numbers) / sizeof(numbers[0]);  // Calculate the number of elements in the array.

    // Call the function to convert and print the integer values.
    convertToInteger(numbers, len);

    return 0;  // Return 0 to indicate successful program execution.
}
