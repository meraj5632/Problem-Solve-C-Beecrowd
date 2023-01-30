#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, i;
    float food;
    cin >> test;

    for (i=1; i<=test; i++)
    {
        int day=0;

        cin >> food;

        while (food >1)
        {
            food = food/2;
            day++;
        }
        cout << day << " dias" << endl;

    }

