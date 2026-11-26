#include <stdio.h>
#include <string.h>
int main()
{
    char A[50];
    int left=0, right;
    printf("Enter your word in lowercase: ");
    scanf("%49s",A);
    right= strlen(A)-1;
    int check=1;
    while(left<right)
    {
        if(A[left] != A[right])
        {
         check=0;
         break;
        }
        left++;
        right--;
    }
    if(check==1)
    printf("The word %s is a palindrome.",A);
    else
    printf("The word %s is not a palindrome.",A);
}
