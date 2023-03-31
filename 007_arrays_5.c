#include <stdio.h>
#include <stdlib.h>

// Compare fuction for qsort
int compare_ints(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    // Declare array
    int myArray[5] = {3, 1, 4, 5, 2};

    // Sort the array with qsort
    qsort(myArray, 5, sizeof(int), compare_ints);

    // Print the sorted array
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", myArray[i]);
    }
    // Return 0 to indicate that the program finished without errors
    return 0;
}
