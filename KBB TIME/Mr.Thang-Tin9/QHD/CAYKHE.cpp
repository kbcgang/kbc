/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
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
kien n, k, m, dem, f[NT + 5];
kien maxx, minn, vtr, ans, l, r, dp[1000000][2];
pair <int, int> a[Million];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    dp[1][1] = a[1].first;
    dp[1][2] = a[1].second;
    for (int i = 2; i <= n; i++)
    {
        int ng = 0;
        int ng1 = 0;
        for (int j = 1; j < i; j++)
        {
            if (dp[j][2] + a[i].second <= k)
            {
                if (dp[j][1] + a[i].first > ng)
                {
                    ng = dp[j][1] + a[i].first;
                    ng1 = dp[j][2] + a[i].second;
                }
            }
        }
        dp[i][1] = ng;
        dp[i][2] = ng1;
    }
    for (int i = 1; i <= n; i++)
    {
        ans = max(ans, dp[i][1]);
    }        
    cout << ans;
}
    