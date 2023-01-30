#include <stdio.h>

int main() {

    char ch;
    double  S, T, X;
    scanf ("%s", &ch);
    scanf ("%lf%lf", &S, &T);
    X = S+T*15/100;

    printf ("TOTAL = R$ %.2lf\n", X);
    return 0;
}
