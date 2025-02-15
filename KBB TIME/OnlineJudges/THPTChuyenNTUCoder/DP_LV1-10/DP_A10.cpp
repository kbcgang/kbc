///Hãy làm Sư tử, đừng làm Nai.😅😅😅
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
///☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
int n,k,m,dem, a[3005][3005];
int vtr,ans,l,r, dp[3005][3005];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 2; i <= m; i++)
    {
        dp[i][0] = -1e9;
    }
    for (int i = 1; i <= n; i++)
    {
        dp[0][i] = -1e9;
    }
    dp[1][1] = a[1][1];
    for (int i = 1; i <= m; ++i)
    {
        for (int j = 1; j <= n; j++)
        {
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + a[i][j];
        }
    }
    cout << dp[m][n];
}