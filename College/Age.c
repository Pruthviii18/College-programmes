#include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the age of all people\n");
    printf("Person-1:\n");
    scanf("%d",&a);
    printf("Person-2:\n");
    scanf("%d",&b);
    printf("Person-3:\n");
    scanf("%d",&c);
    if(a>=b && a>=c)
    {
printf("Person-1 is the oldest\n");
    }
 else if(b>=a && b>=c)
    {
        printf("Person-2 is the oldest\n");
    }
else if(c>=a && c>=b)
{
 printf("Person-3 is the oldest\n");
}
if (a<=b && a<=c)
{
    printf("Person-1 is the youngest\n");
}
else if(b<=a && b<=c)
{
     printf("Person-2 is the youngest\n");
}
else 
{
     printf("Person-3 is the youngest\n");
}
}