/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
ll f[60];
ll n = 2, m;
void make_fibo()
{
    f[0] = f[1] = 1;
    while (1ll * (f[n - 1] + f[n - 2]) <= INT_MAX)
    {
        f[n] = f[n - 1] + f[n - 2];
        n++;
    }
}
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
    cin >> m;
    make_fibo();
    for (int i =( upper_bound(f, f + n, m) - f)-1; i >= 1; i--)
        if (f[i] <= m)
        {
            cout << f[i] << " ";
            m -= f[i];
            if (m == 0)
                exit(0);
        }
}