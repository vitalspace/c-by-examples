#include <stdio.h>
#include <stdlib.h>

// Function to convert an array of string representations to double and print them.
void convertToDouble(char *arr[], int len) {
    for (int i = 0; i < len; i++) {
        double number = atof(arr[i]);   // Convert the string to a double.
        printf("%lf\n", number);       // Print the converted double.
    }
}

int main() {
    // Array of string representations of numbers.
    char *numbersArr[] = {"12.123", "1.233223", "234.333"};
    int len = sizeof(numbersArr) / sizeof(numbersArr[0]); // Calculate the number of elements in the array.

    // Call the function to convert and print the double values.
    convertToDouble(numbersArr, len);

    return 0; // Return 0 to indicate successful program execution.
}
