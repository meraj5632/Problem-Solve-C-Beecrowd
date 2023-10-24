#include <stdio.h>
int main()
{
  int n, x, y, sum = 0;
  scanf("%d", &n);
  int i;

  int j = 1;
  
  while (j <= n)
  {
    scanf("%d %d", &x, &y);
   
    if (x < y)
    {
      for (i = x + 1; i < y; i++)
      {
        if (i % 2 != 0)
          sum = sum + i;
      }
      printf("%d\n", sum);
      sum = 0;
    }

    else if (x >= y)
    {
      for (i = y + 1; i < x; i++)

      {
        if (i % 2 != 0)
          sum = sum + i;
      }
      printf("%d\n", sum);
      sum = 0;
    }

    j++;
  }

  return 0;
}
