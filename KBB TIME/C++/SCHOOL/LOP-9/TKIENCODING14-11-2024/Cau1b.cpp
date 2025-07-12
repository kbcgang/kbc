#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if(fopen("Cau1b.INP", "r"))
    {
        freopen("Cau1b.INP", "r", stdin);
        freopen("Cau1b.OUT", "w", stdout);
    }
    long long n,m;
    cin >>n>>m;
    long long s = 0;
    for (long long i = 1; i <= m; i++)
    {
        if (i % 2 != 0)
        {
            s += (i + 1) / 2;
        }
        else
        {
            s += n - i / 2 + 1;
        }
    }
    cout << s;
    return 0;
}