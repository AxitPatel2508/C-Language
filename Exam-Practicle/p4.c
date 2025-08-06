// Q.4 Write a C program to find cube of each elements of an 1D array using Pointer.

#include <stdio.h>

void cube(int *ptr, int n)
{
    int i;
    int ans;
    for (i = 0; i < n; i++)
    {
        ans = *(ptr + i);
        printf("\n%d", ans * ans * ans);
    }
}

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

    cube(&a[0], n);
}