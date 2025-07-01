// wap to reverse user given number.
// ex. 123 --> 321
// ex. 121 --> 121

#include <stdio.h> //Standard input output header file
#include <conio.h> //Console input output header file

void main()
{
    int num, rev = 0, r;

    printf("Enter Number :");
    scanf("%d", &num);

    while (num > 0)
    {
        r = num % 10;
        rev = rev * 10 + r;
        num = num / 10;
    }
    printf("Reverse Number :%d", rev);
}