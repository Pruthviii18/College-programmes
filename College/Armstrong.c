#include <stdio.h>
int main()
{
    int n,temp,count,digit,sum;
    printf("Armstrong numbers from 1 to 500 are:\n");
    for(n=1; n<=500; n++)
    {
        temp = n;
        sum = 0;
        while (temp !=0)
        {
            digit = temp % 10;
            sum = sum + digit*digit*digit;
            temp = temp/10;
        }
        if(sum==n)
        printf("%d\n",n);
    }
    return 0;

}