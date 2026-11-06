#include <stdio.h>
void main()
{
    int n,i;
    printf("Enter the number of array elements:");
    scanf("%d",&n);
    int A[n];
    printf("Enter the individual array elements:\n");
    for(i=0;i<n;i++)
    {
  scanf("%d",&A[i]);
    }
    printf("The array elments are:");
    for(i=0;i<n;i++)
    {
        printf("%d\n",A[i]);
    }
}