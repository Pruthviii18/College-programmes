#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the two operands to perform arithmatic operations:\n");
    scanf("%d%d",&a,&b);
    printf("The sum is=%d\n",a+b);
    printf("The difference is=%d\n",a-b);
    printf("the product is=%d\n",a*b);
    if(b==0)
    {
        printf("The divisor is invalid\n");
    }
    else
    {
printf("The division is=%d\n",a/b);
    }

}