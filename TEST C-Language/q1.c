// Write C program to check number is negative, postivie & neutral using ladder if else

#include <stdio.h>

void main()
{
    int num;

    printf("Enter Num :");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("Number is Positive");
    }
    else if (num < 0)
    {
        printf("Number is Negative");
    }
    else if (num == 0)
    {
        printf("Number is Neutral");
    }
}