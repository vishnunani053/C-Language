#include <stdio.h>

int main()
{
    int i, j;
    for (i = 0; i <= 5; i++)
    {
        for (j = 0; j <= 5; j++)
        {
            if (i == 2 && j == 3)
            {
                goto exitLoop;
            }
              printf("i = %d, j = %d\n", i, j);
        }
    }
exitLoop:
  printf("loop ended");
    return 0;
}