#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, cs=1;
    while (cin >> n)
    {
        int cnn=0;

        for (i=1; i<=n; i++)
        {
            for (j=1; j<=i; j++)
            {
                cnn++;
            }
        }

        cout << "Caso " << cs <<": " << cnn+1;

        if (n==0)
        {
            cout << " numero" << endl;
        }
        else
        {
            cout << " numeros" << endl;
        }

        cout << 0;

        for (i=1; i<=n; i++)
        {
            for (j=1; j<=i; j++)
            {
                cout << " " << i;
            }
        }
        cout << endl << endl;
        cs++;
    }
    return 0;
}
