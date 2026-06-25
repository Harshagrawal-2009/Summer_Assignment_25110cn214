#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};  // frequency array for all ASCII characters
    int i;

    printf("Enter a string: ");
    gets(str);

    // Count frequency
    for(i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Print frequencies
    printf("\nCharacter frequencies:\n");
    for(i = 0; i < 256; i++) {
        if(freq[i] != 0) {
            printf("'%c' : %d\n", i, freq[i]);
        }
    }

    return 0;
}
