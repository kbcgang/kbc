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
kien n, k, m, dem, f[Million + 5], a[1000][1000];
kien maxx, minn, ans, l, r;
vector <int> dp[Million];
bool visit[1000][1000];
kien u,v;

void bfs()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            visit[i][j] = false;
        }
    }
    if (a[u][v] == 0)
    {
        cout << 0;
        exit(0);
    }
    queue <pair<int, int>> q;
    q.push({u ,v});
    visit[u][v] = true;
    ans = 1;
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};
    while (!q.empty())
    {
        pair <int, int> vtr = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = vtr.first + dx[i];
            int ny = vtr.second + dy[i];
            if (a[nx][ny] == 1 and visit[nx][ny] == false and nx <= n and nx >= 1 and ny >= 1 and ny <= m)
            {
                visit[nx][ny] = true;
                q.push({nx, ny});
                ans++;
            }
        }
    }
    cout << ans;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m >> u >> v;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            dp[i].push_back(j);
            dp[j].push_back(i);
        }
    }
    bfs();
}
