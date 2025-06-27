// WAP to print 1 to 10 using do_while loop.

#include <stdio.h> //Standard input output header file

void main()
{
    int i = 1;

    do
    {
        printf("%d\n", i); // print i
        i++;               // i=i+1
    } while (i <= 10); // created loop will end when i become grater than 10
}