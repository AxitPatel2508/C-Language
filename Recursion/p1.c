// Wap to find sum of 1 to n using Recursion.
#include <stdio.h>
int sum(int n)
{
    if (n > 0)
    {
        return n + sum(n - 1);
    }
    return 0;
}

void main()
{
    int n, ans;

    printf("Enter Number :");
    scanf("%d", &n);

    ans = sum(n);
    printf("Sum= %d", ans);
}