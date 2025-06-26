// WAP to calculate the factorial of N. using while loop.

#include <stdio.h> //Standard input output header file
#include <conio.h> //Console input output header file

void main()
{
    int i = 1, n;
    int fact = 1;

    printf("Enter Number for Factorial:");
    scanf("%d", &n);

    while (i <= n)
    {
        fact = fact * i;
        i++;
    }
    printf("Factorial is = %d", fact); // print fact
}