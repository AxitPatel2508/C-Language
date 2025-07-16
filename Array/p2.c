// Wap to get and print array of n size.

#include <stdio.h>

void main()
{
    int n, i;

    printf("Enter Size of Array :");
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter arr[%d] :", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}