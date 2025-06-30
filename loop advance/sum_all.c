 // wap to find sum of all digits of a number.
    // ex. 123 --> 6
    // ex. 485 --> 17

#include <stdio.h> //Standard input output header file
#include <conio.h> //Console input output header file

void main()
{
    int num = 256,sum=0;
    int ld=0,fd=0;

    while (num>0)
    {
        ld=num%10;
        sum=sum+ld;
        num/=10;
    }
    
}