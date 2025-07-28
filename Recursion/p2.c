// Wap to find Factorial of n using Recursion.

#include <stdio.h>

int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
  
}
void main()
{
    int n, ans;

    printf("Enter Number :");
    scanf("%d", &n);

    ans = fact(n);
    printf("Factorial Number is :%d ", ans);
}