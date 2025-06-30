// wap to count digit of a number.

#include <stdio.h> //Standard input output header file
#include <conio.h> //Console input output header file

void main()
{
    int num, count = 0; // Declared two integer variable

    printf("Enter Number :"); // input message for user
    scanf("%d", &num);        // user input //125

    while (num > 0) // 125>0
    {
        num /= 10; // 125/10=12 12/10=1 1/10=0
        count++;   // 1 2 3
    }
    printf("Count= %d", count); // print count
}