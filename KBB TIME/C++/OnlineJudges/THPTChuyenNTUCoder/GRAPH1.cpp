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
kien n, k, m, dem, f[Million + 5], ans[1000000];
kien maxx, minn, vtr, u, v, dfs[Million];
vector <int> dp[Million];

void bfs()
{
    for (int i = 2; i <= n; i++)
    {
        f[i] = -1;
    }
    f[1] = 0;
    queue <int> q;
    q.push(1);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int i = 0; i < dp[u].size(); i++)
        {
            if (f[dp[u][i]] == -1)
            {
                f[dp[u][i]] = f[u] + 1;
                q.push(dp[u][i]);
            }
        }
    }
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> u >> v;
        dp[u].push_back(v);
        dp[v].push_back(u);
    }
    bfs();
    for (int i = 2; i <= n; i++)
    {
        cout << f[i] << "\n";
    }
}
