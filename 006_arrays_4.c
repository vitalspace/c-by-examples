#include <stdio.h>

int main()
{
    // Declare array
    int myArray1[5];
    // length
    int lenArray1 = sizeof(myArray1) / sizeof(int);
    
    // Declare and assign an array
    int myArray2[] = {1, 2, 3, 4, 5};
    // length
    int lenArray2 = sizeof(myArray2) / sizeof(myArray2[0]); 

    // Print lengths
    printf("Array1 length : %d\n", lenArray1);
    printf("Array2 length : %d\n", lenArray2);

    // Return 0 to indicate that the program finished without errors
    return 0;
}