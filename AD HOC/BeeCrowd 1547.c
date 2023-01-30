#include<stdio.h>
#include<math.h>
int main ()
{
    int i, j, k, l;
    int N, stu, secret, min, store[1000], sum[1000], pos;

    scanf ("%d", &N);


    for (i=1; i<=N; i++) ///N times the loop will run
    {
        scanf ("%d %d", &stu, &secret); ///total number of student in the class, the number

        for (j=0; j<stu; j++) ///this loop is for the storing of the value of
        {
            scanf ("%d", &store[j]);
        }


                for (k=0; k<stu; k++) ///to find the difference and store it in another array
                {
                       sum[k]= abs (secret-store[k]);
                }


                    min = sum[0];  ///finding the minimum number

                        for (l=1; l<stu; l++)
                        {
                            if (min>sum[l])
                            {
                                min=sum[l];
                                pos=l;
                            }
                        }


        printf ("%d\n", pos+1);  ///18-11-22; 5:30 am; :)
        pos=0;

    }

    return 0;
}
