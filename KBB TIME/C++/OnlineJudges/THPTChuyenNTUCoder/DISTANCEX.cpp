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
kien n, k, m, dem, f[Million + 5];
kien maxx, minn, vtr, ans, l, r, dp[1000][1000][1];

struct CAO
{
    char c;
};
CAO a[1000][1000];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> m >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j].c;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[1][i].c == 'M')
        {
            dp[1][i][0] = dp[1][i - 1][0] + 1; 
        }
        else if (a[1][i].c == 'S')
        {
            dp[1][i][1] = dp[1][i - 1][1] + 1;
        }
        else 
        {
            dp[1][i][1] = dp[1][i - 1][1] + 1;
            dp[1][i][0] = dp[1][i - 1][0] + 1; 
        }
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j].c == 'M')
            {
                dp[i][j][0] = min({dp[i - 1][j][0] + 1, dp[i][j - 1][0] + 1, dp[i - 1][j - 1][0] + 1}); 
            }
            else if (a[i][j].c == 'S')
            {
                dp[i][j][1] = min({dp[i - 1][j][1] + 1, dp[i][j - 1][1] + 1, dp[i - 1][j - 1][1] + 1});
            }
            else 
            {
                dp[i][j][1] = min({dp[i - 1][j][1] + 1, dp[i][j - 1][1] + 1, dp[i - 1][j - 1][1] + 1});
                dp[i][j][0] = min({dp[i - 1][j][0] + 1, dp[i][j - 1][0] + 1, dp[i - 1][j - 1][0] + 1}); 
            }
        }
    }
    for (int i = 1; i<= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << dp[i][j][0] << " ";
        }
        cout << "\n";
    }
}
