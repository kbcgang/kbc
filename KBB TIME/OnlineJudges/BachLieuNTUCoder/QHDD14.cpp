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
int n, k, a[105], dp[10005], trace[10005], dem[10005];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    fill(dp, dp + k + 1, INT_MAX);
    dp[0] = 0;
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i >= a[j] and dp[i - a[j]] + 1 <= dp[i])
            {
                dp[i] = dp[i - a[j]] + 1;
                trace[i] = j;
            }
        }
    }
    cout << dp[k] << "\n";
    int sum = k;
    while (sum > 0)
    {
        int idx = trace[sum];
        dem[idx]++;
        sum -= a[idx];
    }
    for (int i = 1; i <= n; i++)
    {
        cout << dem[i] << " ";
    }
}
