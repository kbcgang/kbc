#include <bits/stdc++.h>
#define int long long
using namespace std;
int n;
main()
{
    if (fopen("COVUA.inp", "r"))
    {
        freopen("COVUA.inp", "r", stdin);
        freopen("COVUA.out", "w", stdout);
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            for (int j = 0; j < n; j++)
            {
                if (j % 2 == 0)
                    cout << "W";
                else
                    cout << "B";
            }
        else
            for (int j = 0; j < n; j++)
            {
                if (j % 2 == 0)
                    cout << "B";
                else
                    cout << "W";
            }
        cout<<"\n";
    }
}