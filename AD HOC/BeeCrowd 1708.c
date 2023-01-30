#include <stdio.h>
int main()
{
    int a, b, i=1, count;
    scanf ("%d%d", &a, &b);

    while (1)
    {
        if ((b*i)-(a*i)>=b)
        {
            count =i;
            break;
        }
        i++;
    }
    printf ("%d\n", count);


    return 0;
}

