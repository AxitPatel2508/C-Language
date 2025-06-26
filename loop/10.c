// WAP to print thr multiplication table of N using while loop.

#include <stdio.h> //Standard input output header file
#include <conio.h> //Console input output header file

void main()
{
    int n, i = 1;

    printf("Enter Number Which you want to Table :");
    scanf("%d", &n);

    while (i <= 10)
    {
        printf("%d * %d =%d \n", n, i, n * i);
        i++;
    }
}