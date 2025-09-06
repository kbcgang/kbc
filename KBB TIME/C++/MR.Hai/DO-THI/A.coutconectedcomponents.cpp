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
kien n, k, m, dem, f[Million + 5], a[1000000];
kien maxx, minn, vtr, ans, l, r;
bool visit[10000];
vector <int> dp[10000];

void bfs() {
    queue <int> q;
    for (int i = 1; i <= n; i++) {
        if (visit[i] == false) {
            vtr++;
            q.push(i);
            visit[i] = true;
            while (!q.empty()) {
                int u = q.front();
                q.pop();
                for (int j = 0; j < dp[u].size(); j++) {
                    if (visit[dp[u][j]] == false) {
                        visit[dp[u][j]] = true;
                        q.push(dp[u][j]);
                    }
                }
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
    kien u, v;
    for (int i = 1; i <= m; i++) {
        cin >> u >> v;
        dp[u].push_back(v);
        dp[v].push_back(u);
    }
    bfs();
    cout << vtr;
    
}
