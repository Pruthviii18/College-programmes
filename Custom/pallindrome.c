#include <stdio.h>
int main()
{
 int og, rem, n;
 long long reversed = 0;
 printf("Enter a number:");
 scanf("%d",&n);
 og=n;
 //rejecting negative values
 if(n<0)
{
    printf("The number is not a pallindrome");
}
while(n!=0)
{
    rem = n%10;
    reversed = (reversed*10) + rem;
    n /=10;
}
if(og==reversed)
{
    printf("The number is a pallindrome");
}
else
{
 printf("The number is not a pallindrome");   
}
return 0;
}