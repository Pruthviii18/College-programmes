#include <stdio.h>
void main()
{
    int n,i;
    printf("Enter the number of array elements:\n");
    scanf("%d",&n);
    int A[n];
    printf("Enter the individual elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("The reversed array elemnts are:\n");
    for(i=n; i>=0; i--)
    {
        printf("%d\n",A[i]);
    }
}
