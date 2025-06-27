// WAP to print 10 to 1 using do_while loop.

#include <stdio.h> //Standard input output header file

void main()
{
    int i = 10;

    do
    {
        printf("%d\n", i); // print i
        i--;               // i=i+1
    } while (i >= 1); // created loop will end when i become less than 1
}