#include <stdio.h>
int main ()
{
 int n, reversed=0, remainder,original;
 printf("Enter an integer:\n");
 scanf("%d",&n);
 original = n;
 while(n>0)
 {
    remainder = n%10;
    reversed= reversed*10 + remainder;
    n=n/10;
 }
 if(original==reversed)
 {
printf("the number is a pallindrome");
 }
 else
 {
   printf("the number is not a pallindrome");
 }
}
