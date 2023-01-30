#include<stdio.h>
int main ()
{
    int i, j, n, k, name;
    scanf ("%d", &n);

    for (i=1; i<=n; i++)
    {
        scanf ("%d", &k);

        for (j=1; j<=k; j++)
        {
            scanf ("%d", &name);

            if (name==1)
            {
                printf ("Rolien\n");
            }
            if (name==2)
            {
                printf ("Naej\n");
            }
            if (name==3)
            {
                printf ("Elehcim\n");
            }
            if (name==4)
            {
                printf ("Odranoel\n");
            }
        }
    }
return 0;
}
