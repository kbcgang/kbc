/// Hãy làm Sư tử, đừng làm Nai
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define int long long 
#define pii pair <int, int>
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 10000000000007
const int MXN = 2 * 1e5 + 5;
kien n, k, m, dem;
kien vtr, ans, l, r, dp[MXN][2][2]; /// dp[vtr][maxx][minn]
vector <pii> adj[MXN];

struct KBB {
    int u;
    kien c, mx, mn;
    bool operator < (const KBB &a) const {
        return c > a.c;
    }
};
priority_queue <KBB> q;

void dijkstra(int s) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= 1; j++) {
            for (int k = 0; k <= 1; k++) {
                dp[i][j][k] = MOD;
            }
        }
    }
    q.push({1, 0, 0, 0});
    while (!q.empty()) {
        int u = q.top().u;
        kien du = q.top().c;
        bool mx = q.top().mx;
        bool mn = q.top().mn;
        q.pop();
        if (du > dp[u][mx][mn]) {
            continue;
        }
        for (auto v : adj[u]) {
            // cout << v.first << " " << visa[v.first] << "\n";
            // cout << u << ": " << dp[u][0][0] << " " << dp[u][0][1] << " " << dp[u][1][0] << " " << dp[u][1][1] << "\n";
            if (dp[v.first][mx][mn] > du + v.second) {
                dp[v.first][mx][mn] = du + v.second;
                q.push({v.first, dp[v.first][mx][mn], mx, mn});
            }
            if (dp[v.first][1][1] > du + v.second and mx == 0 and mn == 0) {
                dp[v.first][1][1] = du + v.second;
                q.push({v.first, dp[v.first][mx][mn], 1, 1});
            }
            if (mx == 0 and dp[v.first][1][mn] > du) {
                dp[v.first][1][mn] = du;
                q.push({v.first, dp[v.first][1][mn], 1, mn});
            }
            if (mn == 0 and dp[v.first][mx][1] > du + v.second * 2) {
                dp[v.first][mx][1] = du + v.second * 2;
                q.push({v.first, dp[v.first][mx][1], mx, 1});
            }
            // dp[v.first][0][0] = min(dp[v.first][0][0], dp[u][0][0] + v.second); // 1
            // dp[v.first][0][1] = min(dp[v.first][0][1], dp[u][0][0] + v.second + v.second); // 2
            // // cout << dp[v.first][0][1] << "hi\n";
            // dp[v.first][1][0] = min(dp[v.first][1][0], dp[u][0][0]); // 0
            // // cout << dp[v.first][0][1] << "ok\n";
            // dp[v.first][1][1] = min(dp[v.first][1][1], dp[u][0][0] + v.second); // 1
            // dp[v.first][1][0] = min(dp[v.first][1][0], dp[u][1][0] + v.second); // INT_MAX 
            // dp[v.first][1][1] = min(dp[v.first][1][1], dp[u][1][0] + v.second + v.second); // INT_MAX
            // // cout << dp[u][0][1] + v.second << " " << dp[v.first][0][1] << "gg\n";
            // dp[v.first][0][1] = min(dp[v.first][0][1], dp[u][0][1] + v.second); // INT_MAX
            // // cout << dp[v.first][0][1] << "hello\n";
            // dp[v.first][1][1] = min(dp[v.first][1][1], dp[u][0][1]); // INT_MAX
            // // cout << v.first << ": " << dp[v.first][0][0] << " " << dp[v.first][0][1] << " " << dp[v.first][1][0] << " " << dp[v.first][1][1] << '\n';

            /*
            1 2 => dp[2][0][0] = 1; => dp[2][0][1] = 2 => dp[2][1][1] = 1;
            */
        }
    }
    for (int i = 2; i <= n; i++) {
        cout << dp[i][1][1] << " ";
    }
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen ("kien.inp", "r", stdin);
    // freopen ("kien.out", "w", stdout);
    cin >> n >> m;
    kien u , v , c;
 	for (int i = 1; i <= m; i++) {
 		cin >> u >> v >> c;
 		adj[u].push_back({v , c});
 		adj[v].push_back({u , c});
 	}
    dijkstra(1);
}
