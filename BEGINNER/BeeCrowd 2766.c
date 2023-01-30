#include<stdio.h>
int main ()
{
    char a[31];
    int i;

    for (i=1; i<=10; i++)
    {
        scanf ("%s", &a);

        if (i==3 || i==7 || i==9)
        {
            printf ("%s\n", a);
        }
    }

}
