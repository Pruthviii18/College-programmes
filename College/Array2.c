#include <stdio.h>
void main()
{
    int A[10],i,pos=0,neg=0;
    printf("Enter array elemnts:\n");
    for(i=0; i<10; i++)
    {
     scanf("%d",&A[i]);
    }
    for(i=0; i<10;i++)
    {
        if(A[i]>0)
        {
            pos +=1;
        }
        else
        {
             neg +=1;
        }
    }
     printf("The number of positive elemts are %d, and the number of negative elments are %d",pos,neg);

}