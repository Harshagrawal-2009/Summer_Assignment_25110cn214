#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, count, maxCount = 0;
    char result;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        count = 1;
        for (j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            result = str[i];
        }
    }

    printf("Maximum occurring character: %c (appears %d times)\n", result, maxCount);
    return 0;
}
