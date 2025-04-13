/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int m, n;
ll a[2000005], x, ans = inf;
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
    cin >> m >> n;
    for (int i = 0; i < m; i++)
        cin >> a[i];
    sort(a, a + m);
    while (n--)
    {
        cin >> x;
        int p = lower_bound(a, a + m, x) - a;
        ans = min({ans, abs(a[p] - x)});
        if(p>1){ans=min(ans,abs(x - a[p - 1]));}
    }
    cout << ans;
}