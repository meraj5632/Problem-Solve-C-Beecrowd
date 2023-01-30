#include <stdio.h>
int main()
{
    int i, high[1000], max, pos;

    for (i=0; i<100; i++)
    {
        scanf ("%d", &high[i]);
    }

    max = high[0];

    for (i=1; i<100; i++)
    {
        if (max < high[i])
        {
            max = high[i];
            pos = i;
        }
    }
    printf("%d\n%d\n", max, pos+1);

  return 0;
}
