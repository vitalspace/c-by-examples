#include <stdio.h>
#include <stdlib.h>

int *converToIntegerMalloc(char *arr[], int len) {
    int *result = (int *)malloc(sizeof(int) * len); 
    
    for(int i = 0; i < len; i++) {
        int number = atoi(arr[i]);
        result[i] = number;
    }

    return result;
}

int main() {
    char *numbersArray [] = {"3423", "2342", "9245", "1108"};
    int len = sizeof(numbersArray) / sizeof(numbersArray[0]);

    int *numbers = converToIntegerMalloc(numbersArray, len);

    for(int i = 0; i < len; i++) {
        printf("%d\n", numbers[i]);
    }

    free(numbers);
    return 0;
}