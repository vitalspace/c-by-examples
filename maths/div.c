#include <stdio.h>

int div(int a, int b) {
    return a / b;
}

int main() {
    int a = 20;
    int b = 10;
    int result = div(a, b);
    printf("%d / %d = %d\n", a, b, result);
    return 0;
}