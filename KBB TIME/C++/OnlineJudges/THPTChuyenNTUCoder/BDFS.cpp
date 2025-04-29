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
kien ans, l, r;
kien u ,v;
vector <int> dp[100005];
bool visit[Million];

void bfs(int s)
{
    queue <int> q;
    visit[s] = 1;
    q.push(s);
    while (!q.empty())
    {
        u = q.front();
        q.pop();
        for (int i = 0; i < dp[u].size(); i++)
        {
            v = dp[u][i];
            if (visit[v] == false)
            {
                visit[v] = true;
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
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> u >> v;
        dp[u].push_back(v);
        dp[v].push_back(u);
    }
    for (int i = 1; i <= n; i++)
    {
        visit[i] = false;
    }
    ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (visit[i] == false)
        {
            ans++;
            bfs(i);
        }
    }
    cout << ans;
}
