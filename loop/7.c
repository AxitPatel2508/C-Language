// WAP to find leap year from 2000 to 3000 using while loop.

#include <stdio.h> //Standard input output header file
#include <conio.h> //Console input output header file

void main()
{
    int n, p; // Declared two integer variable

    printf("Enter N:"); // Input message for N
    scanf("%d", &n);    // User input to N

    printf("Enter P :"); // Input message for P
    scanf("%d", &p); // User input to P

    while (n <= p) 
    {
        if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
        {
            printf("%d\n", n);
        }
        n++;
    }
}