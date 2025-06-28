// WAP to print sum 1 to N using for loop.

#include <stdio.h> //Standard input output header file
#include <conio.h> //Console input output header file

void main()
{
    int n;
    int i, sum = 0;

    printf("Enter N:"); // Input message for N
    scanf("%d", &n);    // User input to N

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("Sum is =%d", sum); // print sum
}