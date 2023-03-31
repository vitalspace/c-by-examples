#include <stdio.h>

int main()
{
    // Declare and assign an array
    int myArray[3] = {1, 2, 3};

    for (size_t i = 0; i < 3; i++)
    {
        // Print current value index
        printf("value: %d\n", myArray[i]);
        /* code */
    }
    
    // Return 0 to indicate that the program finished without errors
    return 0;
}