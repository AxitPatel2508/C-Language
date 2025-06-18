#include <stdio.h>
#include <conio.h>

void main()
{
	// a,b,c,d,...
	// 0,1 --> binary
	// compiler - translator

	// control structure

	// conditional statement - to check conditon
	// if statement - block conditon, (>,<,>=,<=,==,!=) --> 0/1
	// if else statement - true,false
	// nested if else - to multiple conditions, questions, conditions -level by level

	// 18+ --> vote
	// a<b

	int age;

	printf("Enter your age : ");
	scanf("%d", &age); // age = 0
	// dry run
	// age : +ve, -ve, 18>=, 18<=
	if (age >= 18) // false
	{
		// age- 18,18+
		printf("You are eligible for vote !");
	}
	else
	{
		// 1 to 18
		// bellow 0.
		if (age >= 1) // false
		{
			printf("you are not eligible for vote !");
		}
		else
		{
			// 0,-
			printf("enter valid age !");
		}
	}
}

//  PC       GITHUB      Devlopment
// Folder - Repository - directory
// Save   -   Commit   -   save