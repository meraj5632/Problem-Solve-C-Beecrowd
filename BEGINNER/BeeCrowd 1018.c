
#include <stdio.h>
int main()
{

    int k, T;
    scanf ("%d", &k);

    printf ("%d\n", k);

    T = k/100;

    k = k%100;

    printf("%d nota(s) de R$ 100,00\n", T);

    T= k/50;
    k = k%50;

    printf("%d nota(s) de R$ 50,00\n", T);

    T= k/20;
    k = k%20;

    printf("%d nota(s) de R$ 20,00\n", T);

    T= k/10;
    k = k%10;

    printf("%d nota(s) de R$ 10,00\n", T);

    T= k/5;
    k = k%5;

    printf("%d nota(s) de R$ 5,00\n", T);

    T= k/2;
    k = k%2;

    printf("%d nota(s) de R$ 2,00\n", T);

    T= k/1;
    k = k%1;

    printf("%d nota(s) de R$ 1,00\n", T);


    return 0;
}
