// WAP to print thr multiplication table of N using do_while loop.

#include <stdio.h> //Standard input output header file
#include <conio.h> //Console input output header file

void main()
{
    int n, i = 1;

    printf("Enter Number Which you want to Table :");
    scanf("%d", &n);

    do
    {
        printf("%d * %d =%d \n", n, i, n * i);
        i++;
    } while (i <= 10); // check condition
}