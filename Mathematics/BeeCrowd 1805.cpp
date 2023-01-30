#include<stdio.h>
int main ()
{
    long long int m, n, sum;
    scanf ("%lld %lld", &m, &n);

    sum = (n*(n+1))/2 - ((m-1)*(m))/2;
    printf ("%lld\n", sum);

return 0;
}
