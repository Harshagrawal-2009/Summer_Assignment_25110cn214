#include <stdio.h>


int max(int a, int b) {
    if(a>b)
    return a;
    else
    return b;
}

int main() {
    int a, b, c;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    c = max(a, b);

    printf("Max = %d\n", c);

    return 0;
}
