// Q.2 Write a Program to find leap years between two given numbers and store them in an array. And then print that array. Make this program in the shortest memory.

#include <stdio.h>

void main()
{
    int num1, num2, i;

    printf("Enter Number 1 :");
    scanf("%d", &num1);

    printf("Enter Number 2 :");
    scanf("%d", &num2);

    int leap[num1];

    for (i = num1; i <= num2; i += 4)
    {
        printf("%d ",leap[num1+num2]);
    }
}