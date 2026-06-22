#include <stdio.h>
int main() {
    int m, n, i, j, count;

    printf("Enter m and n: ");
    scanf("%d %d", &m, &n);

    printf("Prime numbers between %d and %d are:\n", m, n);

    for (i = m; i <= n; i++) {
        count = 0;
        for (j = 1; j <= i; j++) {
            if (i % j == 0)
                count++;
        }
        if (count == 2)
            printf("%d\t", i);
    }

    return 0;
}
