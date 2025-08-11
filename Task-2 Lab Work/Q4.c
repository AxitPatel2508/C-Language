// Q.4 Wap to find maximum from the 1d array.

#include <stdio.h>

void main()
{
    int i, n;

    printf("Enter Size of Array :");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter a[%d] :", i);
        scanf("%d", &a[i]);
    }

    int max = a[0];

    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    printf("The Maximum Number of Array is :%d", max);
}