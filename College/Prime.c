#include <stdio.h>
int main ()
{
    int n,i,prime;
    printf("Enter a number:\n");
    scanf("%d",&n);
  if(n<2)
  {
    return 0;
  }
    for(i=2; i<=n; i++)
  { 
    prime=1;
    for(int j=2; j<i; j++)
    {
    
        if(i%j==0)
        {
            prime=0;
          break; 
        }   
    }
    if(prime==1)
    {
        printf("%d\n",i);
    }
  }
  printf("\n");
}
    

    
    