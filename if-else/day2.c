#include<stdio.h>
#include<conio.h>

void main()
{
	// control structure
	
	// conditional statement 
	// if - condition --> true/false
	// if condition is true ->
	
	// num even/odd
//	int num; // variable name - relative
//	
//	printf("Enter num : ");
//	scanf("%d",&num); // 18
//	
//	// delhi - aap, vehicle memo - even/odd --> 
//	
//	if(num%2==0) // 0 == 0 
//	{
//		printf("num is even !");
//	}
//	else
//	{
//		printf("num is odd !");
//	}


	// nested if else - multiple conditions
	// age
	// -,0,1to18,18to100,100+	
	
//	int age;
//	
//	printf("Enter age : ");
//	scanf("%d",&age);
//	
	  
	
//	if(age>=18) // 18>= , 18to100,100+
//	{
//		if(age>100)
//		{
//			printf("you cant add age more than 100 !");
//		}
//		else
//		{
//			// 18 to 100
//			printf("you are eligible for vote !");
//		}
//	}
//	else //<=18, // -,0,1to18, 
//	{
//		if(age<=0)
//		{
//			// -, 0
//			if(age==0)
//			{
//				printf("0 age is not allow !");
//			}
//			else
//			{
//				printf("negative age is not allow !");
//			}
//		}
//		else
//		{
//			// 1 to 18
//			printf("you are not eligible for vote !");
//		}
//	}
	
	// a,b	
	// 3 team powerfull
	// ipl
	
	int a,b,c;
	
	printf("Enter a : "); // 100
	scanf("%d",&a); 
	printf("Enter b : "); // 25
	scanf("%d",&b); 
	printf("Enter c : "); // 5
	scanf("%d",&c);
	//a,b,c
	if(a>b) //a>b 100>25
	{
		//a,c
		if(a>c) // 100>5
		{
			//a
			printf("a is max");
		}
		else
		{
			//c
			printf("c is max");
		}
	}
	else
	{
		//b,c
		if(b>c) // 25>5
		{
			//b
			printf("b is max");
		}
		else
		{
			//c
			printf("c is max");
		}
	}
	
	
	
	// 4max from home
	
	
	
	
	
}
