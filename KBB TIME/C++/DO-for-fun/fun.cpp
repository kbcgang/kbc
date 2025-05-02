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
kien n, k, m, dem;
kien maxx, minn, vtr, ans, l, r;
vector <int> dp[Million];
int visit[Million];
int u, v;

void bfs()
{
    for (int i = 1; i <= n; i++)
    {
        visit[i] = -1;
    }
    visit[1] = 0;
    queue <int> q;
    q.push(1);
    int u;
    while (!q.empty())
    {
        u = q.front();
        q.pop();
        for (int i = 0; i < dp[u].size(); i++)
        {
            int v = dp[u][i];
            if (visit[v] == -1)
            {
                visit[v] = visit[u] + 1;
                q.push(v);
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
    for (int i = 1; i <= n; i++)
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
