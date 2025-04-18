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

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kien n;
    cin >> n;
    kien a[n];
    for (kien i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    kien dp[n + 1][3];
    for (kien i = 0; i <= n; i++)
    {
        dp[i][0] = INT_MAX;
        dp[i][1] = INT_MAX;
        dp[i][2] = INT_MAX;
    }
    dp[0][0] = 0;
    dp[0][1] = 0;
    dp[0][2] = 0;
    for (kien i = 1; i <= n; i++)
    {
        dp[i][0] = 1 + min(dp[i - 1][0], min(dp[i - 1][1], dp[i - 1][2]));
        if (a[i - 1] == 1 || a[i - 1] == 3)
        {
            dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]);
        }
        if (a[i - 1] == 2 || a[i - 1] == 3)
        {
            dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]);
        }
    }
    cout << min(dp[n][0], min(dp[n][1], dp[n][2]));
}