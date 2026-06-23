#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int a, b, c;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    c = sum(a, b);

    printf("Sum = %d\n", c);

    return 0;
}
