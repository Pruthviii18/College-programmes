#include <stdio.h>
int main(void)
{
    int h;
     do
     {
        printf("Height:");
     scanf("%d",&h);
     }
     while ( h <= 0);
      for(int i = 0; i < h; i++)
      {
        for(int j = 0; j < h; j++)
        {
            if ( i+j < h-1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
      }
}

