// wap to find sum of all digits of a number.
// ex. 123 --> 6
// ex. 485 --> 17

#include <stdio.h> //Standard input output header file
#include <conio.h> //Console input output header file

void main()
{
    int num, sum = 0; // Declared two integer variable
    int ld;           // Declared one integer variable

    printf("Enter Number :"); // input message for number
    scanf("%d", &num);        // user input //127

    while (num > 0)
    {
        ld = num % 10;  // to find last digit num //ld=7
        sum = sum + ld; // sum=0+7=7
        num = num / 10; // to remove last digit of num //12
    }
    printf("Sum of all Digit :%d", sum); // to print sum of digit
}