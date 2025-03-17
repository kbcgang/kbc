/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define lll main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
int n;
kien w1, w2;

lll()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> w1 >> w2;
    vector<kien> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<kien> weight = {0, w1, w2, 1, w2, w1};
    vector<vector<kien>> dp(n + 1, vector<kien>(6, LLONG_MIN));
    dp[0][0] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= 5; j++)
        {
            dp[i][j] = dp[i - 1][j];
        }
        for (int j = 1; j <= 5; j++)
        {
            if (dp[i - 1][j - 1] != LLONG_MIN)
            {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + weight[j] * a[i]);
            }
        }
    }
    cout << dp[n][5] << "\n";
    return 0;
}
