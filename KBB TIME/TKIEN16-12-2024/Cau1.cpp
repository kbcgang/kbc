/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, a, b, dp[Million], hanghoaA, hanghoaB;
JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> a >> b;
    for (int i = min(a, b); i <= n; i++)
    {
        if (dp[i - a] + a <= i)
        {
            hanghoaA = dp[i - a] + a;
        }
        if (dp[i - b] + b <= i)
        {
            hanghoaB = dp[i - b] + b;
        }
        dp[i] = max(hanghoaA, hanghoaB);
    }
    cout << dp[n];
}