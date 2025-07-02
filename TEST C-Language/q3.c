// Write C program to fins maximum from 3 number using nested if else.

#include <stdio.h>

void main()
{
    int a, b, c;

    printf("Enter A:");
    scanf("%d", &a);

    printf("Enter B:");
    scanf("%d", &b);

    printf("Enter C:");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("A is Max");
        }
        else
        {
            printf("C is Max");
        }
    }
    else
    {
        if (b > c)
        {
            printf("B is Max");
        }
        else
        {
            printf("C is Max");
        }
    }
}