// WAP to print odd no from 1 to N using while loop.

#include <stdio.h> //Standard input output header file
#include <conio.h> //Console input output header file

void main()
{
    int i, n; //Declared two integer variable
    i=1;

    printf("Enter N:"); //Input message for N
    scanf("%d", &n); //User input to N

    while (i <= n) // check condition
    {
        if (i % 2 != 0) // check odd no
        {
            printf("%d\n",i); // print i
        } 
        i++; //i=i+1
    }
}