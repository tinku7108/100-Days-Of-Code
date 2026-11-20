#include <stdio.h>

int main(void) {
    int n = 5;

    for (int i = n; i >= 1; i--) {
        
        for (int space = 1; space < i; space++) {
            printf(" ");
        }

        for (int j = i; j <= n; j++) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}