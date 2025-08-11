// WAP to perform row-wise sum of 2D array.

#include <stdio.h>

void main()
{
    int i, j, r, c;

    printf("Enter Count of Array :");
    scanf("%d", &r);

    printf("Enter Size of Array :");
    scanf("%d", &c);

    int a[r][c];

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter a[%d][%d] :", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < r; i++)
    {
        int row_sum = 0;

        for (j = 0; j < c; j++)
        {
            row_sum = row_sum + a[i][j];
        }
        printf("\nSum of Row-wise of 2D Array Row : %d = %d ", i + 1, row_sum);
    }
}