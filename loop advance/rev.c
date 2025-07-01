// wap to reverse user given number.
// ex. 123 --> 321
// ex. 121 --> 121

#include <stdio.h> //Standard input output header file
#include <conio.h> //Console input output header file

void main()
{
    int num, rev = 0, r; // Declared three integer variable

    printf("Enter Number :"); // input message for number
    scanf("%d", &num);        // user input //592

    while (num > 0)
    {
        r = num % 10;       // to find last digit //2
        rev = rev * 10 + r; // rev=0*10+2=12
        num = num / 10;     // to remove last digit //592/10=59
    }
    printf("Reverse Number :%d", rev); // to print number in reverse
}