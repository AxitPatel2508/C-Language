#include<stdio.h>
#include<conio.h>

void main()
{
	// wap to swap values of two variable.
	// a=20,b=30
	// format specifiers
	// int - %d
	// float - %f
	// double - %lf
	// char - %c
	// using third variable
//	int a = 10, b = 30, c;
//	
//	c = a; // c = 10
//	a = b; // a = 30
//	b = c; // b = 10
//	
//	printf("a = %d, b = %d",a,b);
	// a = 30, b = 30
	
	// withour using third variable
	int a,b;
	
	printf("Enter a : ");
	scanf("%d",&a);// to get used input
	printf("Enter b : ");
	scanf("%d",&b);
	
	a = a + b; // a = 10 + 20 = 30 
	b = a - b; // b = a - b = 30 - 20 = 10 
	a = a - b; // a = a - b = 30 - 10 = 20
	
	printf("a = %d, b = %d",a,b);
	
	
	
	
	
	
}
