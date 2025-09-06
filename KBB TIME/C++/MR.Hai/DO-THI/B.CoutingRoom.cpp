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
kien n, k, m, dem, f[Million + 5], dx[5], dy[5];
kien maxx, minn, vtr, ans, l, r, dp[1000000];
bool visit[10000][10000];
string s[10000];

void bfs(int i, int j) {
    queue <pair <int, int>> q;
    q.push({i, j});
    dx[1] = -1, dx[2] = 0, dx[3] = 1, dx[4] = 0;
    dy[1] = 0, dy[2] = 1, dy[3] = 0, dy[4] = -1;
    while (!q.empty()) {
        pair <int, int> u = q.front();
        q.pop();
        for (int i = 1; i <= 4; i++) {
            pair <int, int> v = {u.first + dx[i], u.second + dy[i]};
            if (visit[v.first][v.second] == false and s[v.first][v.second] == '.' and v.first >= 1 and v.second >= 1 and v.first <= n and v.second <= m) {
                visit[v.first][v.second] = true;
                q.push({v.first, v.second});
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
    for (int i = 1; i <= n; i++) {
        cin >> s[i];
        s[i] = ' ' + s[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (visit[i][j] == false && s[i][j] == '.') {
                bfs(i , j);
                ans++;
            }
        }
    }
    cout << ans;
}
