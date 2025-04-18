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
kien n, k, m, dem, a[1000000], f[Million];
kien maxx, minn, vtr, ans, l, r, dp[1000000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    dem = 1;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] >= a[i-1])
        {
            dp[dem]++;
        }
        else
        {
            dp[dem++]++;
        }
        f[i] = f[i-1] + a[i];
    }
    vtr = *max_element(dp + 1, dp + 1 + dem);
    cout << vtr << "\n";
    for (int i = 1; i <= n - vtr; i++)
    {
        ans = max(ans, f[i + vtr - 1] - f[i - 1]);
        cout << f[i + vtr - 1] - f[i - 1] << " ";
    }
    cout << ans;
}
