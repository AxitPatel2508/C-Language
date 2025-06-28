// WAP to print 1 to N using for loop.

#include <stdio.h> //Standard input output header file
#include <conio.h> //Console input output header file

void main()
{
    int i, n; // Declared two integer variable

    printf("Enter N:"); // Input message for N
    scanf("%d", &n);    // User input to N

    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i); // print i
    }
}