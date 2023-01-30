#include <stdio.h>
int main()
{
    int R, C;
    scanf ("%d%d", &R, &C);

    if ((R%2 != 0 && C%2 != 0) || (R%2 == 0 && C%2 == 0) )
    {
        printf ("1\n");
    }
    else
    {
        printf ("0\n");
    }
    return 0;
}
