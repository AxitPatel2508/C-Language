// WAP to find leap year from 2000 to 3000 using while loop.

#include <stdio.h> //Standard input output header file
#include <conio.h> //Console input output header file

void main()
{
    int start = 2000;
    int end = 3000;

    while (start <= end)
    {
        printf("%d\t", start);
        start += 4; //start=start+4
    }
}