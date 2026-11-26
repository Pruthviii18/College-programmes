#include <stdio.h>
#include <string.h>
void main()
{
    char A[50];
    int i;
    printf("Enter a word that you want to reverse:");
    scanf("%s",A);
    int n = strlen(A);
    for(i=n; i>=0; i--)
    {
   printf("%c",A[i]);
    }

}
