#include <stdio.h>

int main() {
    int row, colm, i, j;
    int matrix[100][100], sum[100];
    printf("Enter matrix size: ");
    scanf("%d %d", &row, &colm);

    printf("Enter elements of %d X %d matrix: \n", row, colm);
    for(i=0; i<row; i++){
        for(j=0; j<colm; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i=0; i<row; i++){
        sum[i] = 0;
        for(j=0; j<colm; j++){
            sum[i] += matrix[i][j];
        }
    }

    for (i = 0; i < row; i++) {
        printf("%d", sum[i]);
        if (i + 1 < row) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}