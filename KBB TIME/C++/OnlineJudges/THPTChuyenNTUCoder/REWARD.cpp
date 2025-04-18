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
int n, k, m, dem, a[100005];
int maxx, minn, vtr, ans, l, r;

void mang1chieu()
{
    int dp[100005];
    cin >> n;
    fill(dp + 1, dp + 1 + n, INT_MIN);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    dp[0] = 0;
    dp[1] = max(a[1], dp[0]);
    for (int i = 2; i <= n; i++)
    {
        dp[i] = max(dp[i - 2] + a[i], dp[i - 1]);
    }
    cout << dp[n] << "\n";
}

void mang2chieu()
{
    int dp[100005][3];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        dp[i][0] = max({dp[i-1][0], dp[i-1][1], dp[i-1][2]});
        dp[i][1] = dp[i-1][0] + a[i];
        dp[i][2] = dp[i-1][1] + a[i];
    }
    cout << max({dp[n][0], dp[n][1], dp[n][2]});
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    mang2chieu();
}