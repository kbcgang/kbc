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
const int MXN = 1e4 + 5;
kien n, k, m, dem, dx[5], dy[5], a[MXN][MXN];
kien maxx, minn, vtr, ans, l, r, dp[1000000];
bool visit[MXN][MXN];
kien u, v;

void dfs() {
    queue <pair<int, int>> q;
    dx[1] = -1, dx[2] = 0, dx[3] = 1, dx[4] = 0;
    dy[1] = 0, dy[2] = 1, dy[3] = 0, dy[4] = -1;
    q.push({u, v});
    visit[u][v] = true;
    ans = 1;
    while (!q.empty()) {
        pair <int, int> u = q.front();
        q.pop();
        for (int i = 1; i <= 4; i++) {
            int nx = u.first + dx[i];
            int ny = u.second + dy[i];
            if (visit[nx][ny] == false and a[nx][ny] == 1 and nx >= 1 and ny >= 1 and  nx <= m and ny <= n) {
                visit[nx][ny] = true;
                ans++;
                q.push({nx, ny});
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
    cin >> m >> n >> u >> v;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
            
        }
    }
    if (a[u][v] == 0) {
        cout << 0;
        exit(0);
    }
    dfs();
    
}
