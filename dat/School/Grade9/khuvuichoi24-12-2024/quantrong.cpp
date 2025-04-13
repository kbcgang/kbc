/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
ll n, a[2000005], ans;
ll pos[2000005], s[2000005];
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
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
    }
    for (ll i = 1; i <= n; i++)
    {
        if (pos[a[i]] != 0)
            ans = max(ans, s[i] - s[pos[a[i]] - 1]);
        if (pos[a[i]] == 0)
            pos[a[i]] = i;
    }
    cout << ans;
}