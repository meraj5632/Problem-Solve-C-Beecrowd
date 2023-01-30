#include<stdio.h>
#include<math.h>
int main()
{
     int i, n, product, amount ;
     double price=0;

     scanf ("%d", &n);

     for (i=1; i<=n; i++)
     {
         scanf ("%d%d", &product, &amount);

         if (product == 1001)
         {
             price += 1.5*amount;
         }
         else if (product == 1002)
         {
             price += 2.5*amount;
         }
         else if (product == 1003)
         {
             price += 3.5*amount;
         }
         else if (product == 1004)
         {
             price += 4.5*amount;
         }
         else if (product == 1005)
         {
             price += 5.5*amount;
         }
     }
     printf ("%.2lf\n", price);

return 0;
}
