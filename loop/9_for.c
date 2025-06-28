// WAP to calculate the factorial of N. using for loop.

#include <stdio.h> //Standard input output header file
#include <conio.h> //Console input output header file

void main()
{
    int i, n; // Declared two integer variable
    int fact = 1; // Declared integer variable

    printf("Enter Number for Factorial:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial is = %d", fact); // print fact
}