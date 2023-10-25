#include <stdio.h>

int main()
{
    char *myArray[] = {"Hello", "world", "form", "c"};
    int len = sizeof(myArray) / sizeof(myArray[0]);

    for (size_t i = 0; i < len; i++)
    {
        printf("%s\n", myArray[i]);
        /* code */
    }

    return 0;
}