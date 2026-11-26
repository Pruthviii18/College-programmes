#include <stdio.h>
int main()
{
float a,b;
char choice;
printf("Enter the arithmatic operation you would like to perform(+,-,*,/)=\n");
scanf("%c",&choice);
if(choice== '+' ||choice== '-' ||choice== '*' ||choice== '/')
{    
printf("Enter the two operands=\n");
scanf("%f%f",&a,&b);
switch(choice)
{
    case '+':
    printf("The sum is = %f", a + b);
    break;

    case '-':
    printf("The difference is = %f", a - b);
    break;

    case '*':
    printf("The product is = %f",a * b);
    break;

   case '/':
     if (b == 0.0f) {
      printf("Error: Division by zero is not allowed.\n");
     } else 
     {
        printf("The division is = %.2f\n", a / b);
     }
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
