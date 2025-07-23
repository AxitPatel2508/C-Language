// Q.2 Write a Program to check if a given number is divisible by both 3 and 5 or not by using a UDF.

#include <stdio.h>

void div(int n)
{
    if (n % 3 == 0 && n % 5 == 0)
    {
        printf("The Number is divisable by both 3 & 5.");
    }
    else
    {
        printf("The Number is Not divisable by both 3 & 5.");
    }
}
void main()
{
    int n;

    printf("Enter Number :");
    scanf("%d", &n);

    div(n);
}
