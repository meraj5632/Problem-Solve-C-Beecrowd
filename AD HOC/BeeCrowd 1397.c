#include <stdio.h>
int main()
{
    int n, i, OgNum, JrNum, og=0, jr=0;

    while (scanf ("%d", &n) && n!=0)
    {

        for (i=1; i<=n; i++)
    {
        scanf ("%d%d", &OgNum, &JrNum);

        if (OgNum==JrNum)
        {
            continue;
        }
        else if (OgNum>JrNum)
        {
            og++;
        }
        else
        {
            jr++;
        }
    }
        printf ("%d %d\n", og, jr);

        og=0;
        jr=0;
    }

 return 0;
}
