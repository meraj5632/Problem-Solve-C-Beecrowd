#include <stdio.h>

int main()
{
    int price, money, change, count=0;

    while (scanf ("%d%d", &price, &money) && price!=0 && money!=0 )
     {
        change=money-price;

        if(change>=100)
        {
            count++;
            change=change-100;
        }

        if(change>=50 && change<100)
        {
            count++;
            change=change-50;
        }
        if(change>=20 && change<50)
        {
            count++;
            change=change-20;
        }
        if(change>=10 && change<20)
        {
            count++;
            change=change-10;
        }
        if(change>=5 && change<10)
        {
            count++;
            change=change-5;
        }
        if(change>=2 && change<5)
        {
            count++;
            change=change-2;
        }
        if(count==2 && change==0)
        {
            printf ("possible\n");
        }
        else
            printf("impossible\n");

        count=0;

    }
    return 0;
}
