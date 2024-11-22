#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m;
main()
{
    if (fopen("UCLN.inp", "r"))
    {
        freopen("UCLN.inp", "r", stdin);
        freopen("UCLN.out", "w", stdout);
    }
    cin >> m >> n;
    if (m < 0 && n < 0)
        cout << -__gcd(m, n);
    else
        cout << __gcd(m, n);
}