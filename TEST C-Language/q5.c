// Write C program to calculate factorial of a number.

#include <stdio.h>

void main()
{
    int num, i, fact = 1;

    printf("Enter Number to find Factorial :");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    printf("Factorial Number is :%d", fact);
}