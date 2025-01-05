///Hãy làm Sư tử, đừng làm Nai.
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmail.com ---
/// https://oj.vnoi.info/problem/ctnbulls
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 2111992
kien n, k, m, dem, maxx, minn, vtr;
kien ans, l, r, dp[100005][2];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    dp[0][1] = 1;
    dp[1][0] = 1;
    dp[1][1] = 1;
    for (kien i = 2; i <= k; i++)
    {
        dp[i][1] = 1;
        dp[i][0] = (dp[i-1][0] + dp[i-1][1]) % MOD;
    }
    for (kien i = k + 1; i <= n; i++)
    {
        dp[i][0] = (dp[i-1][0] + dp[i-1][1]) % MOD;
        dp[i][1] = dp[i-k][0] % MOD;
    }
    cout << (dp[n][0] + dp[n][1]) % MOD;
}
