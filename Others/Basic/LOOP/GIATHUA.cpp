#include <bits/stdc++.h>
#define int long long
using namespace std;
int n;
int s = 1;
main()
{
    if (fopen("GIATHUA.inp", "r"))
    {
        freopen("GIATHUA.inp", "r", stdin);
            freopen("GIATHUA.out", "w", stdout);
    }
    cin >> n;
    for (int i=2;i<=n;i++)
        s*=i;
    cout<<s;
}