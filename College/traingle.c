#include <stdio.h>
void main()
{
    float a,b,c,d;
printf("Enter the all 3 angles of the triangle\n");
printf("Angle-1:\n");
scanf("%f",&a);
printf("Angle-2:\n");
scanf("%f",&b);
printf("Angle-3:\n");
scanf("%f",&c);
d=a+b+c;
if(d==180)
{
    printf("The traingle exists");
}
else
{
printf("The triangle doesn't exist");
}

}