// Q.1 Write a Program to perform the merge operation of two 1D arrays & store it in another array. Keep in mind that both array sizes can be different.

#include <stdio.h>

int main()
{
    int i, n, p;

    printf("Enter Array A's Size :");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter a[%d] :", i);
        scanf("%d", &a[i]);
    }
    
    printf("\nEnter Array B's Size :");
    scanf("%d", &p);

    int b[p];

    for (i = 0; i < p; i++)
    {
        printf("Enter b[%d] :", i);
        scanf("%d", &b[i]);
    }

    int merge[n + p];

    for (i = 0; i < n; i++)
    {
        merge[i] = a[i];
    }

    for (i = 0; i < p; i++)
    {
        merge[i + n] = b[i];
    }

    printf("\n\nMerged Array :\n");
    for (i = 0; i < n + p; i++)
    {
        printf("%d ", merge[i]);
    }
}