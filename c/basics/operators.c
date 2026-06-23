#include <stdio.h>

int main() {
    int a = 10, b = 20;
    printf("%d\n", a + b);
    printf("%d\n", a * b);
    printf("Decimal division: %0.1f\n", (float)a / b);
    printf("Integer division: %0.1f\n", a / b);
    return 0;
}