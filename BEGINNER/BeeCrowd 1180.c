#include <stdio.h>
int main()
{
    int num[1000], i, n, low, pos;
    scanf ("%d", &n);

    for (i=0; i<n; i++)
    {
        scanf ("%d", &num[i]);
    }

    low = num[0];

    for (i=1; i<n; i++)
    {
        if (low>num[i])
        {
            low = num[i];
            pos = i;
        }
    }
    printf ("Menor valor: %d\nPosicao: %d\n", low, pos);

  return 0;
}
