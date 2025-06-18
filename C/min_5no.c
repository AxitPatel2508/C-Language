// WAP to Find min. from given 5 no. using nested if else.

#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d;
	
	printf("Enter A: "); //Input message for A
	scanf("%d",&a);	//User input to a
	
	printf("Enter B: "); //Input message for B
	scanf("%d",&b);	//User input to b
	
	printf("Enter C: "); //Input message for C
	scanf("%d",&c);	//User input to c
	
	printf("Enter D: "); //Input message for D
	scanf("%d",&d);	//User input to d
	
	printf("Enter E: "); //Input message for E
	scanf("%d",&e);	//User input to e
	
	if(a<b)
	{
		if(a<c)
		{
			if(a<d)
			{
				if(a<e)
				{
					printf("A is Min");
				}
				else
				{
					printf("E is Min");
				}
			}
			else
			{
				if(d<e)
				{
					printf("D is Min");
				}
				else
				{
					printf("E is Min");
				}
			}
		
		}
		else
		{
			printf("C is Min");
		}
	}
	else
	{
		if(b<c)
		{
			printf("B is Min");
		}
		else
		{
			printf("C is Min");	
		}
	}
	
}
