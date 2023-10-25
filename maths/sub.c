#include <stdio.h>

int sub(int a, int b) {
    return a - b;
}

int main() {
    int a = 10;
    int b = 2;

    int result = sub(a,b);
    printf("%d - %d = %d\n", a, b, result);
    return 0;
}