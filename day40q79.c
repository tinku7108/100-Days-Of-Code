
#include <stdio.h>

int main()
{
    int a[100][100], row, colm, i, j, d;

    scanf("%d %d", &row, &colm);

    for(i = 0; i < row; i++){
        for(j = 0; j < colm; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(d = 0; d < row + colm - 1; d++)
    {
        if(d % 2 == 0)
        {
            for(i = (d < row ? d : row - 1); i >= 0; i--)
            {
                j = d - i;
                if(j < colm)
                    printf("%d ", a[i][j]);
            }
        }
        else
        {
            for(j = (d < colm ? d : colm - 1); j >= 0; j--)
            {
                i = d - j;
                if(i < row)
                    printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}
