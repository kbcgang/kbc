///Hãy làm Sư tử, đừng làm Nai.
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem;
kien maxx, minn, vtr, ans = INT_MIN, l, r, dp[1000000];
pair <int, int> t[Million];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> t[i].first >> t[i].second;
    }
    sort(t + 1, t + 1 + n);  
    dp[1] = t[1].second - t[1].first;
    ans = dp[1];  
    for (int i = 2; i <= n; i++)
    {
        dp[i] = t[i].second - t[i].first;  
        for (int j = 1; j < i; j++)
        {
            if (t[j].second <= t[i].first) 
            {
                dp[i] = max(dp[i], dp[j] + (t[i].second - t[i].first)); 
            }
        }
        ans = max(ans, dp[i]);
    }
    cout << ans; 
}

