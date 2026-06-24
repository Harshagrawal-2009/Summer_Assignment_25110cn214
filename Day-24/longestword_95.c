#include <stdio.h>
#include <string.h>

int main() {
    char str[100], word[100], longest[100] = "";
    int i = 0, j = 0, max = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            word[j] = str[i];
            j++;
        } else {
            word[j] = '\0';
            if (strlen(word) > max) {
                max = strlen(word);
                strcpy(longest, word);
            }
            j = 0;
        }

        if (str[i] == '\0' || str[i] == '\n') {
            break;
        }
        i++;  // ✅ increment i
    }

    printf("Longest word is: %s\n", longest);
    return 0;
}
