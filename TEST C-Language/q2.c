// Write C program to print multiplication table of any number.

#include <stdio.h>

void main()
{
    int n, i = 1;

    printf("Enter Number for Table :");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
}