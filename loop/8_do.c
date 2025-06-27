// WAP to print sum 1 to N using do_while loop.

#include <stdio.h> //Standard input output header file
#include <conio.h> //Console input output header file

void main()
{
    int n;
    int i = 1, sum = 0;

    printf("Enter N:"); // Input message for N
    scanf("%d", &n);    // User input to N

    do
    {
        sum = sum + i;
        i++;
    } while (i <= n); // check condition

    printf("Sum is =%d", sum); // print sum
}