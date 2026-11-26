#include <stdio.h>
int main()
{
    //Bubble sort
    int n,i;
    printf("Enter the number of elemnts you would like to store in the array: ");
    scanf("%d",&n);
    int A[n];
    for(i=0; i<n; i++)
    scanf("%d",&A[i]);
    for(i=0; i<n; i++)
    {
        if(A[i]>A[i+1])
        A[i+1]=A[i];
    }

    
    
}

