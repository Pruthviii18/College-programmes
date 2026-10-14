#include <stdio.h>
void main()
{
    int n,fact=1;
    printf("Enter any whole number:");
    scanf("%d",&n);
    for(n; n>0; n--)
    {
        fact= n*fact;
    }
    printf("The factorial is %d",fact);
}