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
kien n, k, m, dem, f[Million + 5], a[Million], c[Million];
kien maxx, minn, vtr, ans, l, r, dp[1000000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> c[i];
    }
    dp[0] = 0;
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i - a[j] >= 0)
            {
                dp[i] = max(dp[i], dp[i - a[j]] + c[j]);      
                if (dp[i] < dp[i - a[j]] + c[j])
                {
                    
                }          
            }
        }
    }
    cout << dp[k];

}
