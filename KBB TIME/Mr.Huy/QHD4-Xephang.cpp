///Hãy làm Sư tử, đừng làm Nai.
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// https://oj.vnoi.info/src/7780933
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, f[1000000], vtr1;
kien maxx, minn, vtr, ans, l, dp[1000000];
kien t[Million], r[Million];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> t[i];
    }
    for (int i = 1; i <= n - 1; i++)
    {
        cin >> r[i];
    }
    dp[1] = t[1];
    dp[2] = min(t[1] + t[2], r[1]);
    for (int i = 3; i <= n; i++)
    {
        vtr = dp[i-1] + t[i];
        vtr1= dp[i-2] + r[i-1];
        dp[i] = min(vtr, vtr1);
    }
    cout << dp[n];
}
