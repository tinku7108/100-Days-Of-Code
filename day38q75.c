#include <stdio.h>

int main() {
    int row1, colm1, row2, colm2, i, j;
    int matrix1[100][100], matrix2[100][100], sum[100][100];
    printf("Enter matrix 1 size: ");
    scanf("%d %d", &row1, &colm1);

    printf("Enter elements of %d X %d matrix 1: \n", row1, colm1);
    for(i=0; i<row1; i++){
        for(j=0; j<colm1; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter matrix 2 size: ");
    scanf("%d %d", &row2, &colm2);

    printf("Enter elements of %d X %d matrix 2: \n", row2, colm2);
    for(i=0; i<row2; i++){
        for(j=0; j<colm2; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }

    if(row1 != row2 || colm1 != colm2){
        printf("Sum is not possible");
    }

    else{
        for(i=0; i<row2; i++){
        for(j=0; j<colm2; j++){
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
            }
    }
    }

    printf("Sum of matrix is \n");
    for(i=0; i<row2; i++){
        for(j=0; j<colm2; j++){
            printf("%d ", sum[i][j]);
            }
            printf("\n");
        }
    return 0;
}