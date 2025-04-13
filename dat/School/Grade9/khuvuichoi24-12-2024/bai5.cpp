/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
ll ans, n, a[2000005];
void ChatGPT(ll r)
{
    ll x = a[r];

    ll l = 0;
    while (l <= r)
    {
        ll m = (l + r) / 2;
        ans = max(ans, x % a[m]);
        if (a[m] == x / 2 + 1)
            return;
        if (a[m] > x/2+1)
            r = m - 1;
        else
            l = m + 1;
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
    cin >> n;
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for (ll i = 1; i < n; i++)
        ChatGPT(i);
    cout<<ans;
}