#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, words = 0;

    printf("Enter a sentence: ");
    gets(str);  // reads full line including spaces

    // Count words
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0') {
            words++;
        }
    }

    // Add 1 for the first word (if not empty string)
    if(strlen(str) > 0)
        words++;

    printf("Total words: %d\n", words);

    return 0;
}
