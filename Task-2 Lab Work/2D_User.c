//WAP to get & print 2D array of N elements.


#include <stdio.h>

void main()
{
    int r, c, i, j;

    printf("Enter Count of Array :");
    scanf("%d", &r);
    printf("Enter Size of Array :");
    scanf("%d", &c);

    int a[r][c];

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Ennter a[%d][%d] :", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}