#include <stdio.h>

int mult(int a, int b) {
    return a * b;
}

int main () {
    int a = 2;
    int b = 4;
    int result = mult(a, b);

    printf("%d * %d = %d\n", a, b, result);
    return 0;
}