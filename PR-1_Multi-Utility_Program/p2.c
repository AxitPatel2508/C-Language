// Write C Program to find gross salary.(GROSS SALARY=BASE SALARY+HRA+DA+TA) Ex. Base Salary: 100 RS, HRA=10%, DA=5%, TA=8%.
//Ans = 123 RS.

#include<stdio.h> //Standard input output header file
#include<conio.h> //Console input output header file

void main()
{
	int basic_salary,hra,da,ta,gross_salary; //Declared five integer variables
	
	printf("Enter Basic Salary :"); //Input message for Basic Salary
	scanf("%d",&basic_salary); //User input to Basic Salary
	
	hra=basic_salary*10/100; //Calculate HRA
	da=	basic_salary*5/100; //Calculate DA
	ta=basic_salary*8/100; //Calculate TA
	
	gross_salary=basic_salary+hra+da+ta; //Calculate GROSS SALARY
	
	printf("\nHRA is: %d",hra); //to print HRA
	printf("\nDA is: %d",da); //to print DA
	printf("\nTA is: %d",ta); //to print TA
	printf("\nGross Salary is: %d",gross_salary); //to print gross salary
}