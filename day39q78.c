#include <stdio.h>

int main() {
    int row, colm, i, j, sum = 0;
    int matrix[100][100];
    printf("Enter matrix size: ");
    scanf("%d %d", &row, &colm);

    printf("Enter elements of %d X %d matrix 1: \n", row, colm);
    for(i=0; i<row; i++){
        for(j=0; j<colm; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i=0; i<row; i++){
        for(j=0; j<colm; j++){
            if(i == j){
                sum = sum + matrix[i][j];
            }
        }
    }

    printf("Sum of diagonal elements = %d", sum);
    return 0;
}