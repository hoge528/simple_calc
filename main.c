#include <stdio.h>

int f() {
    printf("hoge\n");
    return 1;
}

int main() {
    int a = 3;
    int b = 3;
    printf("a: %d, b: %d, a + b = %d\n", a, b, a + b);

    return 0;
}
