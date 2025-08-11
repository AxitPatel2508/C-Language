// Q.3 Write a Program to find square of each element from the given array.

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

    for (i = 0; i < n; i++)
    {
        a[i] = a[i] * 2;
        printf("\n The Square : %d ", a[i]);
    }
}