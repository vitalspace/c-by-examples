#include <stdio.h>

int main()
{

    // Direct assignment
    int num10 = 10;
    printf("num10 = %d\n", num10);

    // Compound assignment
    int num20 = 20;
    num20 += 5;
    printf("num20 = %d\n", num20);

    // Conditional assignment
    int numA, numB = 5;
    numA = (numB > 0) ? 10 : 20;
    printf("numA = %d\n", numA);

    // Pointer assignment
    int numX = 10;
    int *numY = &numX;
    *numY = 20;
    printf("numX = %d\n", numX);

    return 0;
}