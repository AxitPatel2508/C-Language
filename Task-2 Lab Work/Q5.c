// Q.5 Wap to find minimum from the 1d array.

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

    int min = a[0];

    for (i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    printf("\nThe Minimum Number of Array is :%d", min);
}