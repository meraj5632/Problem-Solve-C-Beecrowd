#include <stdio.h>

int main() {

    double N, H, M, X;
    scanf ("%lf%lf%lf", &N, &H, &M);
    X = H*M;

    printf ("NUMBER = %.0lf\n", N);
    printf ("SALARY = U$ %.2lf\n", X);
    return 0;
}
