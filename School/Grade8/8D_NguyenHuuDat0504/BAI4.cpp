#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m, x;
main()
{
    if (fopen("BAI4.inp", "r"))
    {
        freopen("BAI4.inp", "r", stdin);
        freopen("BAI4.out", "w", stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        s += x;
    }
    if (s % m == 0)
        cout << s / m;
    else
        cout << s / m + 1;
}