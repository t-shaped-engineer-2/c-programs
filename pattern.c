#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int i, j, n = 5;
    scanf("%d", &n);

    for (i = n; i > 1; i--) 
{
      for (j = n; j >= 1; j--) 
{
        if (j > i)
          printf("%d ", j);
        else
          printf("%d ", i);
     }
      for (j = 2; j <= n; j++) 
{
        if (j > i)
          printf("%d ", j);
        else
          printf("%d ", i);
      }
      printf("\n");
    }
    for (i = 1; i <= n; i++) 
{
      for (j = n; j >= 1; j--) 
{
        if (j > i)
          printf("%d ", j);
        else
          printf("%d ", i);
      }
      for (j = 2; j <= n; j++) 
{
        if (j > i)
          printf("%d ", j);
        else
          printf("%d ", i);
      }
      printf("\n");
    }
    // Complete the code to print the pattern.
    return 0;
}

