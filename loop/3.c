// WAP to print 1 to N using while loop.

#include<stdio.h> //Standard input output header file
#include<conio.h> //Console input output header file

void main()
{
    int i=1,n;

    printf("Enter N:");
    scanf("%d",&n);

    while (i<=n) //check condition
    {
        printf("%d\n",i); //print i
        i++; //i=i+1
    }
    
}