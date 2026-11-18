#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    for(int j=0; j<n2; j++){
    for(int i=1; i<n1; i++){
        printf("*");
    }
    printf("*");
    printf("\n");
}

    return 0;
}