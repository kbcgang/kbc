/// Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007

const int INF = -1e9;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    string s, t;
    cin >> s >> t;
    vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(m + 1, vector<int>(k + 1, INF)));
    dp[0][0][0] = 0;
    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= m; j++)
        {
            for(int c = 0; c <= k; c++)
            {
                if(dp[i][j][c] == INF) continue;
                if(i < n) dp[i + 1][j][c] = max(dp[i + 1][j][c], dp[i][j][c]);
                if(j < m) dp[i][j + 1][c] = max(dp[i][j + 1][c], dp[i][j][c]);
                if(i < n && j < m && s[i] == t[j])
                {
                    dp[i + 1][j + 1][c] = max(dp[i + 1][j + 1][c], dp[i][j][c] + 1);
                    if(c < k)
                    {
                        dp[i + 1][j + 1][c + 1] = max(dp[i + 1][j + 1][c + 1], dp[i][j][c] + 1);
                    }
                }
            }
        }
    }
    int result = dp[n][m][k];
    if(result < 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << result << endl;
    }
    return 0;
}
