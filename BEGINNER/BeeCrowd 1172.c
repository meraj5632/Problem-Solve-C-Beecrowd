#include<stdio.h>
int main ()
{
    int i, mrj[10];

    for (i=0; i<10; i++)
    {
        scanf ("%d", &mrj[i]);

        if (mrj[i]<=0)
        {
            mrj[i] = 1;
        }
    }

    for (i=0; i<10; i++)
    {
        printf ("X[%d] = %d\n", i, mrj[i]);
    }

    return 0;
}
