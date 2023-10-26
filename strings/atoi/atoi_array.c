#include <stdio.h>
#include <stdlib.h>

void convertToInteger(char *arr[], int len) {
    for(int i = 0; i < len; i++) {
        int number = atoi(arr[i]);
        printf("%d\n", number);
    }
}

int main() {
    char *numbers[] = { "123124", "93845", "034950"};
    int len = sizeof(numbers) / sizeof(numbers[0]);
    convertToInteger(numbers, len);
    return 0;
}