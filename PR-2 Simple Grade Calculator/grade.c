// Wap to create Simple Grade Calculator.

#include <stdio.h>

void main()
{
    int score;
    char grade;

    printf("Enter Your Score :");
    scanf("%d", &score);

    if (score >= 90 && score <= 100)
    {
        printf("Your Grade is A");
        grade = 'A';
    }
    else if (score >= 80 && score < 90)
    {
        printf("Your Grade is B");
        grade = 'B';
    }
    else if (score >= 70 && score < 80)
    {
        printf("Your Grade is C");
        grade = 'C';
    }
    else if (score >= 60 && score < 70)
    {
        printf("Your Grade is D");
        grade = 'D';
    }
    else if (score >= 40 && score < 60)
    {
        printf("Your Grade is E");
        grade = 'E';
    }
    else
    {
        printf("Your Grade is F");
        grade = 'F';
    }

    switch (grade)
    {
    case 'A':
        printf("\nExcellent Work !");
        break;

    case 'B':
        printf("\nWell done !");
        break;

    case 'C':
        printf("\nGood job !");
        break;

    case 'D':
        printf("\nYou Passed,but you could do better !");
        break;

    case 'E':
        printf("\nBakwas !");
        break;

    case 'F':
        printf("\nSorry, you failed !");
        break;
    }

    if (grade >= 'A' && grade <= 'D')
    {
        printf("\nCongratulations ! You are eligible for the next level.");
    }
    else
    {
        printf("\nPlease try again next time.");
    }
}