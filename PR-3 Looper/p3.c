// wap to find sum of first and last digit of a number.

#include <stdio.h> //Standard input output header file
#include <conio.h> //Console input output header file

void main()
{
    int num, fd = 0;

    printf("Enter Number :"); //Input message for num
    scanf("%d", &num);//user input to num  //ex. num=895

    int ld = num % 10; // 895%10=5 // is last digit of num

    while (num > 9) // single digit is not allowed
    {
        num /= 10; // 895/10=89 89/10=8 8/10=0 //num=8
    }
    fd = num; // value of num=8 is copy in first digit

    printf("Sum of First and Last Digit :\n"); // to print first and last digit
    printf("%d + %d = %d", fd, ld, fd + ld);   // 8+5=13
}