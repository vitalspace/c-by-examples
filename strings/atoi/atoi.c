#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[] = "12345";  // A string representing an integer.
    int number = atoi(str);  // Convert the string to an integer using atoi.

    // Print the converted integer.
    printf("The integer is: %d\n", number);

    return 0;  // Return 0 to indicate successful program execution.
}
