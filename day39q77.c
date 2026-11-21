#include <stdio.h>

int main() {
    int row, colm, i, j, flag = 1;
    int matrix[100][100];
    printf("Enter matrix size: ");
    scanf("%d %d", &row, &colm);

    printf("Enter elements of %d X %d matrix 1: \n", row, colm);
    for(i=0; i<row; i++){
        for(j=0; j<colm; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    if(row != colm){
        flag = 0;
    }

    else{
    for(i=0; i<row; i++){
        for(j=i+1; j<row; j++){
            if(matrix[i][i] == matrix[j][j]){
                flag = 0;
                break;
            }
        }
    }
}

    if(flag == 1){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}