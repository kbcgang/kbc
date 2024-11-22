#include <bits/stdc++.h>
#define int long long
using namespace std;
int a, b, c, n, t;
int countnum(int n)
{
    int s = 0;
    while (n > 0)
    {
        s++;
        n /= 10;
    }
    return s;
}
main()
{
    if (fopen("BAI2B.inp", "r"))
    {
        freopen("BAI2B.inp", "r", stdin);
        freopen("BAI2B.out", "w", stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> n;
        int m = pow(10, n - 1);
        int ab = a / __gcd(a, b) * b;
        int abc = ab / __gcd(ab, c) * c;
        if (countnum(abc) > n)
            cout << -1 << '\n';
        else
        {
            int mod = m - (m % abc);
            cout << mod + abc << "\n";
        }
    }
}