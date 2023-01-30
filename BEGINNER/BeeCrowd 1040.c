#include<stdio.h>
#include<math.h>
int main ()
{
    double n1, n2, n3, n4, Av;
    scanf ("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    Av = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
    printf ("Media: %.1lf\n", Av);

        if (Av>=7.0)
        {
            printf ("Aluno aprovado.\n");
        }

       else if (Av<5.0)
        {
            printf ("Aluno reprovado.\n");
        }

        else if (5.0<=Av<=6.9)
        {
            printf("Aluno em exame.\n");

            double n5, Av2;
            scanf ("%lf", &n5);

            printf ("Nota do exame: %.1lf\n", n5);

            Av2 = (Av+n5)/2;

            if (Av2>=5.0)
            {
                printf ("Aluno aprovado.\n");
            }

            if (Av2<=4.9)
            {
                printf ("Aluno reprovado.\n");
            }
                printf ("Media final: %.1f\n", Av2);

        }

    return 0;
}
