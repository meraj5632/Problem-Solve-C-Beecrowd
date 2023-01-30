#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;

    while (cin >> num)
    {
        int prime=0;

        if(num==1)
        {
            cout << "Nada" << endl;
            continue;
        }

        for(int i=2; i<num; i++)
        {
            if(num%i==0)
            {
                prime = 1;
                break;
            }
        }

        if(prime==1)
        {
            cout << "Nada" << endl;
            continue;
        }

        string a = to_string(num);
        int j=0, sup=0;

        while(a[j] != '\0')
        {

            if(a[j]=='2' || a[j]=='3' || a[j]=='5' || a[j]=='7')
            {
                sup = 0;
            }
            else
            {
                sup = 1;
                break;
            }
          j++;
        }

        if(sup==0)
        {
            cout << "Super" << endl;
        }
        else if (sup==1)
        {
            cout << "Primo" << endl;
        }
    }
    return 0;
}
