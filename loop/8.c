// WAP to print sum 1 to N usimg while loop.

#include <stdio.h> //Standard input output header file
#include <conio.h> //Console input output header file

void main()
{
    int n;
    int i = 1, sum = 0;

    printf("Enter N :");
    scanf("%d", &n);

    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    printf("Sum is =%d", sum); // print sum
}