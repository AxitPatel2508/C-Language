// Q.5 Print a below pattern using nested for loop in C language:
// 11

// 12 13

// 14 15 16

// 17 18 19 20

// 21 22 23 24 25

#include <stdio.h>

void main()
{
    int i, j;
    int count = 11;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }
}