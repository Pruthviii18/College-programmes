#include <stdio.h>
int main()
{
int a,b;
char choice;
printf("Enter the arithmatic operation you would like to perform(+,-,*,/,%%)=\n");
scanf("%c",&choice);
if(choice== '+' ||choice== '-' ||choice== '*' ||choice== '/' ||choice== '%')
{    
printf("Enter the two operands=\n");
scanf("%d%d",&a,&b);
switch(choice)
{
    case '+':
    printf("The sum is = %d", a + b);
    break;

    case '-':
    printf("The difference is = %d", a - b);
    break;

    case '*':
    printf("The product is = %d",a * b);
    break;

    case '/':
    printf("The division is = %d",a / b);
    break;

    case '%':
    printf("The modulous is = %d",a % b);
    break;
    
    default:
    printf("The input in invalid");
    break;
}
}
else
{
    printf("Invalid input");
}
}
