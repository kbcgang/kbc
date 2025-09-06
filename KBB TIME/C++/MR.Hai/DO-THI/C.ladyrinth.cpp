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
kien n, k, m, dem, dx[5], dy[5], ax, ay;
kien maxx, minn, vtr, l, r, ans, dp[10000+1][10000+1];
bool visit[10000+1][10000+1];
string s[10000+1];
pair<int,int> parent[10000+1][10000+1]; 
char pmove[10000+1][10000+1];              
char dch[4] = {'U','R','D','L'};        

void bfs(int si, int sj) {
    queue<pair<int,int>> q;
    visit[si][sj] = true;
    dp[si][sj] = 0;
    q.push({si, sj});
    dx[1] = -1; dx[2] = 0; dx[3] = 1; dx[4] = 0;
    dy[1] = 0;  dy[2] = 1; dy[3] = 0; dy[4] = -1;
    while (!q.empty()) {
        pair <int, int> u = q.front();
        q.pop();
        int x = u.first, y = u.second;
        for (int d = 1; d <= 4; d++) {
            int nx = x + dx[d];
            int ny = y + dy[d];
            if (nx < 1 || nx > n || ny < 1 || ny > m) continue;
            if (!visit[nx][ny] and (s[nx][ny] == '.' || s[nx][ny] == 'B')) {
                visit[nx][ny] = true;
                dp[nx][ny] = dp[x][y] + 1;
                parent[nx][ny] = {x, y};
                pmove[nx][ny] = dch[d-1];
                q.push({nx, ny});
            }
        }
    }
}

JAV() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> s[i];
        s[i] = ' ' + s[i]; 
        for (int j = 1; j <= m; j++) {
            if (s[i][j] == 'A') { ax = i; ay = j; }
        }
    }
    bfs(ax, ay);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s[i][j] == 'B' and visit[i][j] == true) {
                cout << "YES\n";
                cout << dp[i][j] << "\n";
                vector<char> duong;
                int cx = i, cy = j;
                while (!(cx == ax and cy == ay)) {
                    duong.push_back(pmove[cx][cy]);
                    auto p = parent[cx][cy];
                    cx = p.first;
                    cy = p.second;
                }
                reverse(duong.begin(), duong.end());
                for (char c : duong) cout << c;
                exit(0);
            }
        }
    }
    cout << "NO";
}

