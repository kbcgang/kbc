/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, f[Million + 5], a[1000000];
kien maxx, minn, vtr, ans, l, r, dp[1000000];

int tknp(int x, int vtr)
{
    int l = vtr, r = n;
    int mid, kq = -1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (f[mid] - f[vtr - 1] <= k)
        {
            kq = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    return kq;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        f[i] = f[i-1] + a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        dem = tknp(a[i], i);
        if (dem != -1)
            ans += dem - i + 1;
    }
    cout << ans;
}
