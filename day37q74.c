#include <stdio.h>

int main() {
    int row, colm, i, j;
    int matrix[100][100], transpose[100][100];
    printf("Enter matrix size: ");
    scanf("%d %d", &row, &colm);

    printf("Enter elements of %d X %d matrix: \n", row, colm);
    for(i=0; i<row; i++){
        for(j=0; j<colm; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i=0; i<row; i++){
        for(j=0; j<colm; j++){
                transpose[j][i] = matrix[i][j];
        }
    }

    for(i=0; i<colm; i++){
        for(j=0; j<row; j++){
            printf("%d", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}