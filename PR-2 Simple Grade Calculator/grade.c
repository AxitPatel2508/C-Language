// Wap to create Simple Grade Calculator.

#include <stdio.h>

void main()
{
    int score;

    printf("Enter Your Score :");
    scanf("%d", &score);

    if (score >= 90)
    {
        printf("Your Grade is A");
    }
    else if (score >= 80 && score <= 90)
    {
        printf("Your Grade is B");
    }
    else if (score >= 70 && score <= 80)
    {
        printf("Your Grade is C");
    }
    else if (score >= 60 && score <= 70)
    {
        printf("Your Grade is D");
    }
    else if (score >= 40 && score <= 60)
    {
        printf("Your Grade is E");
    }
    else
    {
        printf("Sorry,you Failed");
    }

switch(score>0)
{
    case 1:
        if(score>=90)
        printf("");
        break;
}
}