#include<stdio.h>
int main ()
{
    float n, sal, increment;
    scanf ("%f", &n);

    if (n>=0 && n<=400)
    {
        sal = n + (n*.15);
        increment = n*.15;

        printf ("Novo salario: %.2f\n", sal);
        printf ("Reajuste ganho: %.2f\n", increment);
        printf ("Em percentual: 15 %%\n");
    }

    else if (n>=400.01 && n<=800)
    {
        sal = n + (n*.12);
        increment = n*.12;

        printf ("Novo salario: %.2f\n", sal);
        printf ("Reajuste ganho: %.2f\n", increment);
        printf ("Em percentual: 12 %%\n");
    }

   else if (n>=800.01 && n<=1200)
    {
        sal = n + (n*.1);
        increment = n*.1;

        printf ("Novo salario: %.2f\n", sal);
        printf ("Reajuste ganho: %.2f\n", increment);
        printf ("Em percentual: 10 %%\n");
    }

   else if (n>=1200.01 && n<=2000)
    {
        sal = n + (n*.07);
        increment = n*.07;

        printf ("Novo salario: %.2f\n", sal);
        printf ("Reajuste ganho: %.2f\n", increment);
        printf ("Em percentual: 7 %%\n");
    }

  else if ( n>2000)
    {
        sal = n + (n*.04);
        increment = n*.04;

        printf ("Novo salario: %.2f\n", sal);
        printf ("Reajuste ganho: %.2f\n", increment);
        printf ("Em percentual: 4 %%\n");
    }
    return 0;
}
