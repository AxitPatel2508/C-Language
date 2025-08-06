// Q.2 Write a C program to find the sum of elements in an array using a function.

#include <stdio.h>

void sum(int a[], int n)
{
    int sum = 0, i;

    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    printf("Sum of Array :%d", sum);
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

    sum(a, n);
}