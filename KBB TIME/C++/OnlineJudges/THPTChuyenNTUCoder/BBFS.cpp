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
kien n, s, m, dem, a[1000000];
kien u, v, maxx, minn, vtr, l, r;
vector <int> dp[Million];
kien visit[Million];

void bfs()
{
    for (int i = 1; i <= m; i++)
    {
        visit[i] = -1;
    }
    queue<int> q;
    q.push(s);
    visit[s] = 0;
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

struct kbb
{
    kien it, vistt;
};
kbb ans[Million];

bool cmp(kbb x, kbb y)
{
    return x.vistt < y.vistt;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m >> s;
    for (int i = 1; i <= m; i++)
    {
        cin >> u >> v;
        dp[u].push_back(v);
        dp[v].push_back(u);
    }
    bfs();
    for (int i = 1; i <= m; i++)
    {
        ans[i].it = i;
        ans[i].vistt = visit[i];
    }
    sort (ans + 1, ans + 1 + m, cmp);
    for (int i = 1; i <= m; i++)
    {
        cout << ans[i].it << " " << ans[i].vistt << "\n";
    }
}
