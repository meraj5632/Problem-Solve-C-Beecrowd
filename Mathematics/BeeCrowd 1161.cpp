#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1, num2;

    while (cin >> num1 >> num2 )
    {
        long long int fact1=1, fact2=1;

        for (int i=2; i<=num1; i++)
        {
            fact1 = fact1*i;
        }
        for (int j=2; j<=num2; j++)
        {
            fact2 = fact2*j;
        }

        cout << fact1+fact2 << endl;
    }

    return 0;
}
