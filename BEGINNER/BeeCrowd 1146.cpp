#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    while ( (cin >> n) && (n !=0) )
    {
        for (int i=1; i<=n; i++)
        {
            if (i==n)
            {
                cout << i << endl;
            }
            else
            {
                cout << i << " ";
            }
        }
    }
}
