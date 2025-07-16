// Wap to print only even number of array.

#include <stdio.h>

void main()
{
    int i, n, sum = 0;

    printf("Enter Size of Array :");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter a[%d] :", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d ", a[i]);
        }
    }
}