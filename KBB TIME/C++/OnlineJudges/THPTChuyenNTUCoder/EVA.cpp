/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 100000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, f[Million + 5], a[1000000];
kien u, v, vtr, ans, l, r;
vector <int> dp[Million];
kien visit[Million];

void bfs()
{
    for (int i = 1; i <= n; i++)
    {
        visit[i] = -1;
    }
    queue <int> q;
    for (int i = 1; i <= k; i++)
    {
        visit[a[i]] = 0;
        q.push(a[i]);
    }
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int i = 0; i < dp[u].size(); i++)
        {
            int v = dp[u][i];
            if (visit[v] == -1)
            {
                q.push(v);
                visit[v] = visit[u] + 1;
            }
        }
    }
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> u >> v;
        dp[u].push_back(v);
        dp[v].push_back(u);
    }
    bfs();
    for (int i = 1; i <= n; i++)
    {
        cout << visit[i] << " ";
    }
    
}
