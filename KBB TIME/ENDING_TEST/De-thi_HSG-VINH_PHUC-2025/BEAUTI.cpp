/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .。. o(≧▽≦)o .。.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007

void KBB()
{
    kien n, x, ans;
    cin >> n >> x;
    kien a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    kien dp[n][3];
    dp[0][0] = max(0LL, a[0]);
    dp[0][1] = max(0LL, a[0] * x);
    dp[0][2] = max(0LL, a[0]);
    ans = max({dp[0][0], dp[0][1], dp[0][2]});
    for (int i = 1; i < n; i++)
    {
        dp[i][0] = max(0LL, dp[i - 1][0] + a[i]);
        dp[i][1] = max({0LL, dp[i - 1][0] + a[i] * x, dp[i - 1][1] + a[i] * x});
        dp[i][2] = max({0LL, dp[i - 1][1] + a[i], dp[i - 1][2] + a[i]});
        ans = max({ans, dp[i][0], dp[i][1], dp[i][2]});
    }
    cout << ans;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    KBB();
} 