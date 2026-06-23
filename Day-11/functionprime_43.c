#include <stdio.h>

void prime(int a) {
    int count = 0;

    for (int i = 1; i <= a; i++) {
        if (a % i == 0)
            count++;
    }

    if (count == 2) {
        printf("Prime number\n");
    } else {
        printf("Not a prime number\n");
    }
}

int main() {
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    prime(a);  
    return 0;
}
