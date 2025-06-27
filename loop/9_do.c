// WAP to calculate the factorial of N. using do_while loop.

#include <stdio.h> //Standard input output header file
#include <conio.h> //Console input output header file

void main()
{
    int i = 1, n;
    int fact = 1;

    printf("Enter Number for Factorial:");
    scanf("%d", &n);

    do
    {
        fact = fact * i;
        i++;
    } while (i <= n); // check condition

    printf("Factorial is = %d", fact); // print fact
}