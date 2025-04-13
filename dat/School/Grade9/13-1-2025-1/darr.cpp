/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, a[200005], ans;
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
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for (int i = 1; i < n; i++)
    {
        int pos = lower_bound(a, a + i, a[i] / 2 + 1) - a;
        if (pos < i)
        {
            ans = max(ans, a[i] % a[pos]);
            if (pos > 0)
                ans = max(ans, a[i] % a[pos - 1]);
        }
    }
    cout << ans;
}