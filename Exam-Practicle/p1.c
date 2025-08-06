// Q.1 Implement a C program to simulate a simple calculator that performs addition, subtraction, multiplication, and division based on user input.

#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}

void main()
{
    int a, b, choise, ans;

    printf("Enter A :");
    scanf("%d", &a);

    printf("Enter B :");
    scanf("%d", &b);

    printf("\nEnter 1 for Addition of a + b :");
    printf("\nEnter 2 for Subtraction of a - b :");
    printf("\nEnter 3 for Multiplication of a * b :");
    printf("\nEnter 4 for Division of a / b :");
    printf("\nEnter Your Choise :\n");
    scanf("%d", &choise);

    if (choise == 0)
    {
        printf("Enter Valid Choise");
    }

    switch (choise)
    {
    case 1:
        ans = add(a, b);
        printf("Addition=%d", ans);
        break;

    case 2:
        ans = sub(a, b);
        printf("Subtraction =%d", ans);
        break;

    case 3:
        ans = mul(a, b);
        printf("Multiplication =%d", ans);
        break;

    case 4:
        ans = div(a, b);
        printf("Division =%d", ans);
        break;

    default:
        printf("Enter Valid choice !");
    }
}