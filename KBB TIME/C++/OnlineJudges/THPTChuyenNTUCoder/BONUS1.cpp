/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, a[1505][1505];
kien maxx, minn, vtr, ans, l, r, dp[1505][1505] = {0};

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> m >> n >> k;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1] + a[i][j] - dp[i - 1][j - 1];
        }
    }

    for (int i = 1; i <= m - k + 1; i++)
    {
        for (int j = 1; j <= n - k + 1; j++)
        {
            kien sum = dp[i + k - 1][j + k - 1] - dp[i - 1][j + k - 1] - dp[i + k - 1][j - 1] + dp[i - 1][j - 1];
            ans = max(ans, sum);
        }
    }
    cout << ans;
}
