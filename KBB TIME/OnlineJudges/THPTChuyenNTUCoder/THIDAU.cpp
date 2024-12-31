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
int n, k;
int dp[105], ans;
pair<int, int> a[105]; 

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].first;
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].second;
    }
    for (int i = 1; i <= n; i++)
    {
        dp[i] = a[i].second;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if (a[i].first - a[j].first >= k)
            {
                dp[i] = max(dp[i], dp[j] + a[i].second);
            }
        }
    }
    ans = *max_element(dp + 1, dp + 1 + n);
    cout << ans;
}
    