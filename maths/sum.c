#include <stdio.h>


int sum (int a, int b) {
    return a + b;
}

int main () {
    int a = 2;
    int b = 3;
    int result = sum(a, b);
    printf("%d + %d = %d\n" , a, b, result );
    return 0;
}