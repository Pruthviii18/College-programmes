#include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter 3 numbers");
    scanf("%d%d%d", &a,&b,&c);
    if(a>b)
    {
        if(b>c)
        {
            printf("%d is the smallest number",c);
        }
        else
        {
            printf("%d is the smallest number",b);
        }
    }
    else
    {
        if(a>c)
        {
            printf("%d is the smallest number",c);
        }
        else
        {
            printf("%d is the smallest number",a);
        }
    }

}