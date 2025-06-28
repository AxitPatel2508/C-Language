// WAP to find leap year from 2000 to 3000 using do_while loop.

#include <stdio.h> //Standard input output header file
#include <conio.h> //Console input output header file

void main()
{
    int start; //Declared integer variable

    for (start = 2000; start <= 3000; start += 4)
    {
        printf("%d\t", start); // print leap year
    }
}