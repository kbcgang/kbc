/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
ll t, a, b, l, r;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> l >> r >> a >> b;
        ll x = a / __gcd(a, b) * b;
        cout << r / a - (l - 1) / a + r / b - (l - 1) / b - (r / x - (l - 1) / x) << "\n";
    }
}