#include <stdio.h>
int main()
{
    int y;
    float x;
    scanf ("%d", &y);
    scanf ("%f", &x);



    switch (y) {

    case 1 :
    printf ("Total: R$ %.2f\n", x*4.00);
    break;

    case 2 :
    printf ("Total: R$ %.2f\n", x*4.50);
    break;

    case 3 :
    printf ("Total: R$ %.2f\n", x*5.00);
    break;

    case 4 :
    printf ("Total: R$ %.2f\n", x*2.00);
    break;

    case 5 :
    printf ("Total: R$ %.2f\n", x*1.50);
    break;

    default:
    printf ("Invalid Number\n");
    break;
    }
    return 0;
}
