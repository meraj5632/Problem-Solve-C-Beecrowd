
#include <stdio.h>
int main()
{
    int n, i;
    float run[100], min;

    while (scanf ("%d", &n) !=EOF )
           {
               for (i=0; i<n; i++)
                {
                    scanf ("%f", &run[i]);
                }

                min= run[0];
                for (i=1; i<n; i++)
                {
                    if (min>run[i])
                    {
                         min=run[i];
                    }
                }
                printf ("%.2f\n", min);

           }
    return 0;
}
