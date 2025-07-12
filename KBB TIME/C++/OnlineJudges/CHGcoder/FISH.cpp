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

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        dp[a[i]] = 1;
    } /// Gọi dp[i] là số cách nhiều nhất có thể đựng được cá
    for (int i = 1; i <= n; i++)
    {
        for (int j = k; j >= 1; j--)
        {
            if (j - a[j] >= 0)
            dp[j] += dp[j - a[i]];
        }
    }
    cout << dp[k];
}
