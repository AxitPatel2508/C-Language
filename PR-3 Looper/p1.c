// Develop a program that prints all alphabets from 'a' to 'z' by skipping 3 alphabets using a do-while loop.

#include <stdio.h>

void main()
{
    char i = 'a'; // integer i start with a

    do
    {
        printf("%c ", i); // print i
        i += 4;           // i=i+4
    } while (i <= 'z'); // check condition
}