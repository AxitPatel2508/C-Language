// Wap to find Sum of all Element of Array.

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
        sum = sum + a[i];
    }

    printf("Sum of all Array Element is : %d", sum);
}