#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[] = "3.14159";  // A string representing a floating-point number.
    double number = atof(str);  // Convert the string to a floating-point number.

    // Print the converted number in floating-point format.
    printf("The number in floating-point format is: %lf\n", number);

    return 0;  // Return 0 to indicate successful program execution.
}
