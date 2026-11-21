#include <stdio.h>
#include <ctype.h>

int main() {
    char name[200];
    int i = 0;

    if (fgets(name, sizeof(name), stdin) == NULL) {
        return 0;
    }

    int new_word = 1; // Tracks whether the next non-space character starts a word

    while (name[i] != '\0') {
        if (isspace((unsigned char)name[i])) {
            new_word = 1;
        } else if (new_word) {
            printf("%c.", toupper((unsigned char)name[i]));
            new_word = 0;
        }
        i++;
    }

    printf("\n");
    return 0;
}