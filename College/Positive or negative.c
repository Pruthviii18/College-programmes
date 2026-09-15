#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    if(a>0)
    {
        printf("the number is positive");
    }
    if(a==0)
    {
        printf("Tthe number is 0");
    }
    else
    {
        printf("the number is negative");
    }
 return 0;
}
