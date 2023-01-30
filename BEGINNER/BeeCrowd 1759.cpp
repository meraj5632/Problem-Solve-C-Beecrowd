#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n, i, count=0;
    cin >> n;

    for (i=1; i<=n; i++)
    {
        count++;
        if (count==n)
        {
            cout << "Ho!" << endl;
        }
        else
        {
            cout << "Ho ";
        }

    }
}
