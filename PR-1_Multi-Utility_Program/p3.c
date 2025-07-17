// Wap to find the third angle of a right triangle when two other angles are given.

#include <stdio.h>

void main()
{
    int f_angle, s_angle, t_angle; //Declared three integer variable

    printf("Enter First Angle :"); 
    scanf("%d",&f_angle);

    printf("Enter Second Angle :");
    scanf("%d",&s_angle);

    t_angle = 180 - (f_angle + s_angle); //calculate 

    printf("Third Angle of Triangle is :%d", t_angle); //to print third angle
}