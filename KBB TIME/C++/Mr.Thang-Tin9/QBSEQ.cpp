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
int n, k, m, dem, a[1000000];
int maxx, minn, vtr, ans, l, r, dp[10005][10005];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    memset(dp, -50, sizeof dp);
    dp[0][0] = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < k; j++)
        {
            dp[i][j] = max(dp[i][j], dp[i - 1][j]);
            dp[i][j] = max(dp[i - 1][((j - a[i]) % k + k) % k] + 1, dp[i][j]);
        }
    }
    cout << dp[n][0];
}
