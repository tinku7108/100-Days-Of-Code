#include <stdio.h>

int main() {
    int n1, n2, i, j;
    int matrix[500][500];

    printf("Enter size of the 2D array: ");
    scanf("%d %d", &n1, &n2);

    printf("Enter elements of matrix(%d X %d): \n", n1, n2);
    for(i=0; i<n1; i++){
        for(j=0; j<n2; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            printf("%d", matrix[i][j]);
            if (j + 1 < n2) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}