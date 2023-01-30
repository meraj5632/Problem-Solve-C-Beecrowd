#include<stdio.h>
#include<math.h>
int main ()
{
    int i, n, num, C=0, R=0, S=0;
    char name;
    double total=0, cP, rP, sP;
    scanf ("%d", &n);

    for (i=1; i<=n; i++)
    {
        scanf ("%d", &num);
        scanf (" %c", &name);

        total += num;

        if (name=='C')
        {
            C += num;
        }
        if (name=='R')
        {
            R += num;
        }
        if (name=='S')
        {
            S += num;
        }
    }
    printf ("Total: %.0lf cobaias\n", total);
    printf ("Total de coelhos: %d\n", C);
    printf ("Total de ratos: %d\n", R);
    printf ("Total de sapos: %d\n", S);

    cP = (C*100)/total;
    rP = (R*100)/total;
    sP = (S*100)/total;

    printf ("Percentual de coelhos: %.2lf %%\n", cP);
    printf ("Percentual de ratos: %.2lf %%\n", rP);
    printf ("Percentual de sapos: %.2lf %%\n", sP);


return 0;
}
