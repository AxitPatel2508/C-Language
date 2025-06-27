// WAP to print 1 to N using do_while loop.

#include <stdio.h> //Standard input output header file
#include <conio.h> //Console input output header file

void main()
{
    int i = 1, n;

    printf("Enter N:");
    scanf("%d", &n);

    do
    {
        printf("%d\n", i); // print i
        i++;               // i=i+1
    } while (i <= n); // created loop will end when i become grater than n
}