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
    cin >> n;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3; /// 1 1 1, 1 2, 3, 2 1
    dp[4] = 6; /// 1 1 1 1, 1 2 1, 1 3, 2 2, 2 1 1, 1 1 2, 3 1     
    dp[5] = 10;/// 1 1 1 1 1, 1 2 1 1, 1 3 1, 1 4, 1 2 2
    dp[6] = 20;
    for (int i = 7; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3] + dp[i - 4] + dp[i - 5] + dp[i - 6];
        dp[i] %= MOD;
    }
    cout << dp[n];
} 
