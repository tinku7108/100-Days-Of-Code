#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int first = 1; // Tracks whether we are printing the very first substring

    if (scanf("%99s", str) != 1) {
        return 0;
    }

    int len = (int)strlen(str);

    // Outer loop picks the starting index of the substring
    for (int start = 0; start < len; start++) {
        // Inner loop picks the ending index of the substring
        for (int end = start; end < len; end++) {
            if (!first) {
                printf(",");
            }
            first = 0;

            // Print characters from 'start' to 'end'
            for (int k = start; k <= end; k++) {
                printf("%c", str[k]);
            }
        }
    }

    printf("\n");
    return 0;
}