#include <stdio.h>

int main()
{
    // Declare array
    int myArray[] = {1, 2, 3, 4, 5};
    // Value to search for in the array
    int searchValue = 3;
    // The "index" variable is initialized with -1 in case the searched value is not found
    int index = -1;
    // The array is traversed with a for loop to find the desired value
    for (size_t i = 0; i < 5; i++)
    {
        // If the search value is found, assign the index in the "index" variable and exit the loop
        if (myArray[i] == searchValue)
        {
            index = i;
            break;
        }
    }
    // Print the index of the searched value (-1 if not found)
    printf("%d\n", index);
    // Return 0 to indicate that the program finished without errors
    return 0;
}