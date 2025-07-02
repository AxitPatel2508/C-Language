// wap to swap value of two variable without using third variable.(without using + and -)

#include<stdio.h>
#include<conio.h>

void main()
{
	int x=20;	//value 20 is assign in variable x
	int y=40;	//value 40 is assign in variable y
	
	 x = x * y;	// x= 20*40 =800
     y = x / y; // y= 800/40 =20
     x = x / y; // x= 800/20 =40
     
     printf("x=%d\n",x); // to print value of variable x ex.x=40 
     printf("y=%d",y);	 // to print value of variable y ex.y=20
}