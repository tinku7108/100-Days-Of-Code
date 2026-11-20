#include <stdio.h>

int main(void) {
    int n = 5;

    for (int i = 0; i < n; i++) {
        for (int space = 0; space < i; space++) {
            printf(" ");
        }

        
        for (int star = 0; star < n - i; star++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}