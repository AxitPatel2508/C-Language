// WAP to print N to 1 using do_while loop.

#include <stdio.h> //Standard input output header file
#include <conio.h> //Console input output header file

void main()
{
    int i, n; // Declared two integer variable
    i = 1;

    printf("Enter N:"); // Input message for N
    scanf("%d", &n);    // User input to N

    do
    {
        printf("%d\n", n); // print n
        n--;               // n=n-1
    } while (n >= i); // created loop will end when i become less than n
}