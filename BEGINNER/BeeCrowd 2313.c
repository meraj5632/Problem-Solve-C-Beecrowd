#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c;
    scanf ("%d %d %d", &a, &b, &c);

    if (a>=b+c || b>=a+c || c>=a+b)
    {
        printf ("Invalido\n");
    }


    else
    {
        if ( (a==b && a==c) )
        {
            printf ("Valido-Equilatero\n");

        }

        else if ( (a==b && a!=c) || (a==c && a!=b) || (b==c && b!=a) )
        {
            printf ("Valido-Isoceles\n");

        }

        else
        {
            printf ("Valido-Escaleno\n");

        }


         if ( (a*a==b*b+c*c) || (b*b==a*a+c*c) || (c*c==a*a+b*b) )
            {
                printf ("Retangulo: S\n");
            }

        else
            {
                printf ("Retangulo: N\n");
            }

    }

return 0;
}
