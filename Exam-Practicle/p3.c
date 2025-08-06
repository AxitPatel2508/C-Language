// Q.3 Write a C program that defines a function to print a reverse 1D array elements and print sum of all elements.

#include <stdio.h>

void rev(int a[], int n)
{
    int i;

    for (i = n - 1; i >= 0; i--)
    {
        printf("%d\n", a[i]);
    }
}

void sum(int a[], int n)
{
    int i, sum = 0;

    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    printf("\n Sum of All Elements of Array :%d", sum);
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

    rev(a, n);
    sum(a, n);
}