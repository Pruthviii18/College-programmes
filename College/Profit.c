#include <stdio.h>
void main()
{
float a,b,c;
printf("Enter the cost price:");
scanf("%f",&a);
printf("Enter the selling price:");
scanf("%f",&b);
c=b-a;
if(b>a)
{
    printf("The profit is %.2f",c);
}
else if (b<a)
{
    printf("The loss is %.2f",-c);
}
else
{
    printf("There is no profit or loss");
}
}