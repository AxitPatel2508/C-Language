// WAP to print thr multiplication table of N using for loop.

#include <stdio.h> //Standard input output header file
#include <conio.h> //Console input output header file

void main()
{
    int n, i; // Declared two integer variable

    printf("Enter Number Which you want to Table :");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d =%d \n", n, i, n * i);
    }
}