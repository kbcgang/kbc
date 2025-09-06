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
kien n, k, m, dem, a[1000000];
bool visa[Million + 5];
kien maxx, minn, vtr, ans, l, r;
vector <int> dp[200005];

void bfs() {
    queue <int> q;
    dem = 1;
    for (int i = 1; i <= n; i++) {
        if (visa[i] == false) {
            q.push(i);
            visa[i] = true;
            a[i] = 1;
            while (!q.empty()) {
                int u = q.front();
                q.pop();
                for (int j = 0; j < dp[u].size(); j++) {
                    int v = dp[u][j];
                    if (visa[v] == false) {
                        visa[v] = true;
                        a[v] = 3 - a[u];
                        q.push(v);
                    }
                    else if (a[v] == a[u]) {
                        cout << "IMPOSSIBLE\n";
                        exit(0);
                    }
                }
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
//    freopen ("kien.inp", "r", stdin);
//    freopen ("kien.out", "w", stdout);
    cin >> n >> m;
    kien u , v;
    for (int i = 1; i <= m; i++) {
        cin >> u >> v;
        dp[u].push_back(v);
        dp[v].push_back(u);
    }
    bfs();
}
