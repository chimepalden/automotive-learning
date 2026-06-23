#include <stdio.h>

void greet() {
    printf("Function with parameters!\n");
}
int add(int a, int b) {
    return a + b;
}
int main() {
    greet();
    printf("%d", add(3,2));
    return 0;
}